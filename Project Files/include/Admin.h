#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "Member.h"
#include "User.h";

// A subclass of Member
class Admin :
    public Member
{
public:
    /// <summary>
    /// No args. Default constructor
    /// </summary>
    Admin() : Member(true) {}

    /// <summary>
    /// Three args. Parameterized constructor
    /// </summary>
    /// <param name="_id">Admin ID</param>
    /// <param name="_username">Admin username</param>
    /// <param name="_password">Admin password</param>
    Admin(int _id, string _username, string _password) : Member(_id, _username, _password, true) {}

    virtual Admin& operator=(const Admin& admin) {

        if (this == &admin) {
            return *this;
        }

        member_id = admin.member_id;
        username = admin.username;
        password = admin.password;
        isAdmin = admin.isAdmin;

        return *this;
    }

    /// <summary>
    /// Function to make a non-admin member an admin and update the member data file
    /// </summary>
    /// <param name="mem">Member to be made an admin</param>
    void make_MemberAdmin(Member& mem) const {

        if (isAdmin) {
            if (!mem.isMemberAdmin()) {
                if (mem.check_credentials()) {
                    mem.isMemberAdmin(true);
                    ifstream infile;
                    ofstream outfile;
                    int mem_id, is_user_admin;
                    string f_username, f_password;
                    infile.open("member.dat", ios::in);
                    outfile.open("temp.dat", ios::out);
                    while (infile >> mem_id) {
                        infile >> f_username >> f_password >> is_user_admin;
                        if (mem.get_id() == mem_id && mem.get_username().compare(f_username) == 0 && mem.get_password().compare(f_password) == 0) {
                            continue;
                        }
                        else {
                            outfile << left << setw(5) << mem_id << setw(5) << f_username << setw(5)
                                << " " << f_password << setw(5) << " " << is_user_admin << endl;
                        }
                    }
                    infile.close();
                    outfile.close();
                    infile.open("temp.dat", ios::in);
                    outfile.open("member.dat", ios::out);
                    while (infile >> mem_id) {
                        infile >> f_username >> f_password >> is_user_admin;
                        outfile << left << setw(6) << mem_id << setw(6) << " " << f_username << setw(6)
                            << " " << f_password << setw(6) << " " << is_user_admin << endl;
                    }
                    infile.close();

                    //Clear temp.dat file to prevent leaking information and to avoid complications
                    outfile.close();
                    outfile.open("temp.dat", ios::out | ios::trunc);
                    outfile.close();
                    write_member(mem);
                    cout << "Member " << mem.get_id() << " " << "is now an admin" << endl;
                }
            }
            else {
                cout << "Member is already an administrator!" << endl;
            }
        }
        else {
            cout << "Only administrators can provide administrator privileges!" << endl;
        }
    }
    /// <summary>
    /// Function for writing member info to file
    /// </summary>
    /// <returns>True if process is successful, otherwise false</returns>
    bool write_member(const Member& mem) const {

        ofstream outfile;
        outfile.open("member.dat", ios::app);
        if (!outfile.is_open()) {
            cout << "Output data file not found!" << endl;
            outfile.close();
            return false;
        }
        if (mem.check_credentials()) {
            cout << "Member already exists!" << endl;
            outfile.close();
            return true;
        }
        else {
            outfile << left << setw(6) << mem.get_id() << setw(6) << " " << mem.get_username() << setw(6)
                << " " << mem.get_password() << setw(6) << " " << (int)mem.isMemberAdmin() << endl;
            cout << "Member successfully saved to file!" << endl;
            outfile.close();
            ++member_count;
            return true;
        }
    }

    /// <summary>
    /// Function to delete member information from member data file
    /// </summary>
    /// <param name="mem">Member to be deleted from data file</param>
    /// <returns>True if successful, false otherwise</returns>
    bool delete_member(const Member& mem) const {

        if (!mem.check_credentials()) {
            cout << "No member data to delete" << endl;
            return false;
        }
        else {
            ifstream infile;
            ofstream outfile;
            int mem_id, is_user_admin;
            string f_username, f_password;
            infile.open("member.dat", ios::in);
            outfile.open("temp.dat", ios::out);
            while (infile >> mem_id) {
                infile >> f_username >> f_password >> is_user_admin;
                if (mem.get_id() == mem_id && mem.get_username().compare(f_username) == 0 && mem.get_password().compare(f_password) == 0) {
                    continue;
                }
                else {
                    outfile << left << setw(5) << mem_id << setw(5) << f_username << setw(5)
                        << " " << f_password << setw(5) << " " << is_user_admin << endl;
                }
            }
            infile.close();
            outfile.close();
            infile.open("temp.dat", ios::in);
            outfile.open("member.dat", ios::out);
            while (infile >> mem_id) {
                infile >> f_username >> f_password >> is_user_admin;
                outfile << left << setw(6) << mem_id << setw(6) << " " << f_username << setw(6)
                    << " " << f_password << setw(6) << " " << is_user_admin << endl;
            }
            infile.close();

            //Clear temp.dat file to prevent leaking information and to avoid complications
            outfile.close();
            outfile.open("temp.dat", ios::out | ios::trunc);
            outfile.close();

            if (mem.check_credentials()) {
                cout << "Error while deleting member!" << endl;
                return false;
            }
            else {
                cout << "Member successfully deleted" << endl;
                member_count--;
                return true;
            }
        }
    }

    /// <summary>
    /// Used for getting non-admin member count
    /// </summary>
    /// <returns>Number of users</returns>
    int get_user_count() const {

        string line;
        int num_of_lines = 0;
        ifstream infile;
        infile.open("member.dat", ios::in);
        while (getline(infile, line)) {
            if (line[line.size() - 1] == '0') {
                ++num_of_lines;
            }
        }
        infile.close();
        return num_of_lines;
    }

    /// <summary>
    /// Used for displaying information on all non-admin members.
    /// </summary>
    void display_non_admins() const {

        int usercount = get_user_count();
        User* user_list = new User[usercount];

        ifstream infile;
        infile.open("member.dat", ios::in);
        int mem_id, is_user_admin;
        string f_username, f_password, line;
        for (int i = 0; infile >> mem_id && i < usercount; i++) {
            infile >> f_username >> f_password >> is_user_admin;
            if (is_user_admin != 1) {
                user_list[i].set_id(mem_id);
                user_list[i].set_username(f_username);
                user_list[i].set_password(f_password);
                user_list[i].isMemberAdmin(is_user_admin);
            }
            else {
                i--;
            }
        }
        for (int j = 0; j < usercount; j++) {
            cout << j + 1 << ". ";
            user_list[j].display_member_info();
        }
        delete[] user_list;
        infile.close();
        return;
    }
};

