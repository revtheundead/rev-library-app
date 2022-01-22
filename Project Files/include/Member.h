#pragma once
#include <iostream>
#include <string>

using namespace std;

class Member
{
protected:
    int member_id;
    string username;
    string password;
    bool isAdmin;
    static int member_count;

public:
    /// <summary>
    /// No args. Default constructor
    /// </summary>
    Member() : member_id{ NULL }, username{ "None" }, password{ "-" }, isAdmin{ false } {}
    /// <summary>
    /// One arg. Default constructor for admins
    /// </summary>
    Member(bool _isAdmin) : member_id{ NULL }, username{ "None" }, password{ "-" }, isAdmin{ _isAdmin } {}
    /// <summary>
    /// Three args. Parameterized member constructor
    /// </summary>
    /// <param name="_id">Member ID</param>
    /// <param name="_username">Member username used for sign-in procedures</param>
    /// <param name="_password">Member password used for sign-in procedures</param>
    Member(int _id, string _username, string _password)
        : member_id{ _id }, username{ _username }, password{ _password }, isAdmin{ false } {}
    /// <summary>
    /// Four args. Parameterized member constructor. Used only by admin users.
    /// </summary>
    /// <param name="_id"></param>
    /// <param name="_username"></param>
    /// <param name="_password"></param>
    Member(int _id, string _username, string _password, bool _isAdmin)
        : member_id{ _id }, username{ _username }, password{ _password }, isAdmin{ _isAdmin } {}

    virtual bool operator==(const Member& member) {

        return ((this->member_id == member.member_id) &&
            (this->username.compare(member.username) == 0) &&
            (this->password.compare(member.password) == 0) &&
            (this->isAdmin == member.isAdmin));
    }

    virtual Member& operator=(const Member& member) {

        if (this == &member) {
            return *this;
        }

        member_id = member.member_id;
        username = member.username;
        password = member.password;
        isAdmin = member.isAdmin;

        return *this;
    }

    //Functions to get member info
    int get_id() const {
        return member_id;
    }
    string get_username() const {
        return username;
    }
    string get_password() const {
        return password;
    }
    bool isMemberAdmin() const {
        return isAdmin;
    }
    int get_member_count() const {
        return member_count;
    }
    //Functions to set member info
    void set_id(int member_id) {
        this->member_id = member_id;
    }
    void set_username(string username) {
        this->username = username;
    }
    void set_password(string password) {
        this->password = password;
    }
    void isMemberAdmin(bool isAdmin) {
        this->isAdmin = isAdmin;
    }

    /// <summary>
    /// Used for displaying member information
    /// </summary>
    void display_member_info() const {

        cout << left << setw(6) << member_id << setw(6) << " " << username
            << setw(6) << " " << password << setw(6) << " " << isAdmin << endl;
    }
    /// <summary>
    /// Used for validating member credentials
    /// </summary>
    /// <returns>True if member data is found, false otherwise</returns>
    bool check_credentials() const {

        int mem_id, is_user_admin;
        string f_username, f_password;
        ifstream infile;
        infile.open("member.dat", ios::in);
        if (!infile.is_open()) {
            cout << "Member data file not found!" << endl;
            infile.close();
            return false;
        }
        while (infile >> mem_id) {
            infile >> f_username >> f_password >> is_user_admin;
            if (username.compare(f_username) == 0 && password.compare(f_password) == 0) {
                infile.close();
                return true;
            }
        }
        // No such member found in the data file
        infile.close();
        return false;
    }
    /// <summary>
    /// Function to get member count from data file. This function is called before any other class function is called
    /// to avoid complications and errors
    /// </summary>
    /// <param name="mem">The object used to access member_count static variable</param>
    /// <returns>Number of recorded members</returns>
    friend int get_RecordedMemberCount(Member& mem);
};

