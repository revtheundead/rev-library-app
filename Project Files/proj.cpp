#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include <sstream>
#include <stdlib.h> // Used for generating member ID
#include <time.h> // Used for generating member ID
#include "Book.h";
#include "Member.h";
#include "Admin.h"
#include "User.h";

using namespace std;

/// <summary>
/// getting book array and array size from from calling function.
/// Then, asking user for searching text which is excepted as bookname, edition, author, category and publisher.
/// the engine searches title by title and results are displayed category by category under the mentioned headings.
/// </summary>
/// <param name="book_arr"> getting books from calling function </param>
/// <param name="arr_size"> getting size of array </param>

void searchEngine(Book* book_arr, int arr_size) { 
    int i, j;
    string searchText;
    cin.ignore();
    cout << "Enter searching text: ";
    getline(cin, searchText);



    //for book_name

    for (i = 0, j = 0; i < arr_size; i++) {

        if (searchText == book_arr[i].label.get_book_name()) {
            if (j == 0) {
                cout << endl << endl << "~~  FOR BOOK NAME  ~~" << endl << endl;
                cout << left << setw(7) << "ID" << setw(33) << "Book Name" << setw(15) << "Edition" << setw(35) << "Author" << setw(25) << "Category";
                cout << setw(17) << "Number of Pages" << setw(30) << "Publisher" << setw(17) << "Availability" << endl;
            }

            cout << left << setw(7) << book_arr[i].get_ID() << setw(33) << book_arr[i].label.get_book_name() << setw(15) << book_arr[i].label.get_edition();
            cout << setw(35) << book_arr[i].label.get_author() << setw(25) << book_arr[i].label.get_category() << setw(17);
            cout << book_arr[i].label.get_num_of_pages() << setw(30) << book_arr[i].label.get_publisher() << setw(17) << book_arr[i].get_availabilitiy() << endl;
            j++;
        }


    }

    if (j == 1)
        cout << endl << j << " result was found searching by book name." << endl;
    else if (j > 1)
        cout << endl << j << " results were found searching by book name." << endl;
    else
        cout << endl << "No results were found searching by book name." << endl;

    //for edition

    for (i = 0, j = 0; i < arr_size; i++) {

        if (searchText == book_arr[i].label.get_edition()) {
            if (j == 0) {
                cout << endl << endl << "~~  FOR THE EDITION  ~~" << endl << endl;
                cout << left << setw(7) << "ID" << setw(33) << "Book Name" << setw(15) << "Edition" << setw(35) << "Author" << setw(25) << "Category";
                cout << setw(17) << "Number of Pages" << setw(30) << "Publisher" << setw(17) << "Availability" << endl;
            }

            cout << left << setw(7) << book_arr[i].get_ID() << setw(33) << book_arr[i].label.get_book_name() << setw(15) << book_arr[i].label.get_edition();
            cout << setw(35) << book_arr[i].label.get_author() << setw(25) << book_arr[i].label.get_category() << setw(17);
            cout << book_arr[i].label.get_num_of_pages() << setw(30) << book_arr[i].label.get_publisher() << setw(17) << book_arr[i].get_availabilitiy() << endl;
            j++;
        }


    }

    if (j == 1)
        cout << endl << j << " result was found searching by the edition." << endl;
    else if (j > 1)
        cout << endl << j << " results were found searching by the edition." << endl;
    else
        cout << endl << "No results were found searching by the edition." << endl;

    //for author

    for (i = 0, j = 0; i < arr_size; i++) {

        if (searchText == book_arr[i].label.get_author()) {
            if (j == 0) {
                cout << endl << endl << "~~  FOR THE AUTHOR  ~~" << endl << endl;
                cout << left << setw(7) << "ID" << setw(33) << "Book Name" << setw(15) << "Edition" << setw(35) << "Author" << setw(25) << "Category";
                cout << setw(17) << "Number of Pages" << setw(30) << "Publisher" << setw(17) << "Availability" << endl;
            }

            cout << left << setw(7) << book_arr[i].get_ID() << setw(33) << book_arr[i].label.get_book_name() << setw(15) << book_arr[i].label.get_edition();
            cout << setw(35) << book_arr[i].label.get_author() << setw(25) << book_arr[i].label.get_category() << setw(17);
            cout << book_arr[i].label.get_num_of_pages() << setw(30) << book_arr[i].label.get_publisher() << setw(17) << book_arr[i].get_availabilitiy() << endl;
            j++;
        }


    }

    if (j == 1)
        cout << endl << j << " result was found searching by the author." << endl;
    else if (j > 1)
        cout << endl << j << " results were found searching by the author." << endl;
    else
        cout << endl << "No results were found searching by the author." << endl;

    //for category

    for (i = 0, j = 0; i < arr_size; i++) {

        if (searchText == book_arr[i].label.get_category()) {
            if (j == 0) {
                cout << endl << endl << "~~  FOR THE CATEGORY  ~~" << endl << endl;
                cout << left << setw(7) << "ID" << setw(33) << "Book Name" << setw(15) << "Edition" << setw(35) << "Author" << setw(25) << "Category";
                cout << setw(17) << "Number of Pages" << setw(30) << "Publisher" << setw(17) << "Availability" << endl;
            }

            cout << left << setw(7) << book_arr[i].get_ID() << setw(33) << book_arr[i].label.get_book_name() << setw(15) << book_arr[i].label.get_edition();
            cout << setw(35) << book_arr[i].label.get_author() << setw(25) << book_arr[i].label.get_category() << setw(17);
            cout << book_arr[i].label.get_num_of_pages() << setw(30) << book_arr[i].label.get_publisher() << setw(17) << book_arr[i].get_availabilitiy() << endl;
            j++;
        }


    }

    if (j == 1)
        cout << endl << j << " result was found searching by the category." << endl;
    else if (j > 1)
        cout << endl << j << " results were found searching by the category." << endl;
    else
        cout << endl << "No results were found searching by the category." << endl;

    //for publisher

    for (i = 0, j = 0; i < arr_size; i++) {

        if (searchText == book_arr[i].label.get_publisher()) {
            if (j == 0) {
                cout << endl << endl << "~~  FOR THE PUBLISHER  ~~" << endl << endl;
                cout << left << setw(7) << "ID" << setw(33) << "Book Name" << setw(15) << "Edition" << setw(35) << "Author" << setw(25) << "Category";
                cout << setw(17) << "Number of Pages" << setw(30) << "Publisher" << setw(17) << "Availability" << endl;
            }

            cout << left << setw(7) << book_arr[i].get_ID() << setw(33) << book_arr[i].label.get_book_name() << setw(15) << book_arr[i].label.get_edition();
            cout << setw(35) << book_arr[i].label.get_author() << setw(25) << book_arr[i].label.get_category() << setw(17);
            cout << book_arr[i].label.get_num_of_pages() << setw(30) << book_arr[i].label.get_publisher() << setw(17) << book_arr[i].get_availabilitiy() << endl;
            j++;
        }


    }

    if (j == 1)
        cout << endl << j << " result was found searching by the publisher." << endl;
    else if (j > 1)
        cout << endl << j << " results were found searching by the publisher." << endl;
    else
        cout << endl << "No results were found searching by the publisher." << endl;

}

/// <summary>
/// getting all books with the full information. Only admins and borrower can see borrower ID and bring back date.
/// 
/// </summary>
/// <param name="book_arr"> getting books from calling function </param>
/// <param name="arr_size"> getting size of array </param>
/// <param name="isAdmin"> getting boolean parameter is admin or not to show borrower ID and BBD </param>

void get_allBooksInfo(Book* book_arr, int arr_size, bool isAdmin) { 
    for (int i = 0; i < arr_size; i++) {
        if (i == 0) {
            cout << endl << endl << "~~  Books  ~~" << endl << endl;
            cout << left << setw(7) << "ID" << setw(33) << "Book Name" << setw(15) << "Edition" << setw(35) << "Author" << setw(25) << "Category";
            cout << setw(17) << "Number of Pages" << setw(30) << "Publisher" << setw(17) << "Availability" << setw(14) << "Book Shelf";
            cout << setw(8) << "Shelf" << setw(9) << "Place";
            if (isAdmin) {
                cout << setw(14) << "Borrower ID" << "BBD";
            }
            cout << endl;
        }
        cout << left << setw(7) << book_arr[i].get_ID() << setw(33) << book_arr[i].label.get_book_name() << setw(15) << book_arr[i].label.get_edition();
        cout << setw(35) << book_arr[i].label.get_author() << setw(25) << book_arr[i].label.get_category() << setw(17);
        cout << book_arr[i].label.get_num_of_pages() << setw(30) << book_arr[i].label.get_publisher() << setw(17) << book_arr[i].get_availabilitiy() << setw(14) << book_arr[i].get_bookshelf();
        cout << setw(8) << book_arr[i].get_shelf() << setw(9) << book_arr[i].get_place();
        if (isAdmin) {
            cout << setw(14) << book_arr[i].get_borrowerID(1) << book_arr[i].get_bringBackDate() << " days left.";
        }
        cout << endl;
    }
}

/// <summary>
/// we realized that sometimes, we need full information a book for borrowing or smth like that
/// so this function was coded.
/// </summary>
/// <param name="book_arr"> getting books from calling function </param>
/// <param name="arr_size"> getting size of array </param>
/// <param name="ID"> need this for searching index to show a book which is wanted </param>
/// <param name="isAdmin"> getting boolean parameter is admin or not to show borrower ID and BBD </param>

void get_allInfoaBook(Book* book_arr, int arr_size, int ID, bool isAdmin) {  
    int flag = 0, targetIndex;
    for (int i = 0; i < arr_size; i++) {
        if (book_arr[i].get_ID() == ID) {
            flag++;
            targetIndex = i;
            break;
        }
    }
    if (flag != 0) {
        cout << endl << endl << "~~  Books  ~~" << endl << endl;
        cout << left << setw(7) << "ID" << setw(33) << "Book Name" << setw(15) << "Edition" << setw(35) << "Author" << setw(25) << "Category";
        cout << setw(17) << "Number of Pages" << setw(30) << "Publisher" << setw(17) << "Availability" << setw(14) << "Book Shelf";
        cout << setw(8) << "Shelf" << setw(9) << "Place";
        if (isAdmin) {
            cout << setw(14) << "Borrower ID" << "BBD";
        }
        cout << endl;

        cout << left << setw(7) << book_arr[targetIndex].get_ID() << setw(33) << book_arr[targetIndex].label.get_book_name() << setw(15) << book_arr[targetIndex].label.get_edition();
        cout << setw(35) << book_arr[targetIndex].label.get_author() << setw(25) << book_arr[targetIndex].label.get_category() << setw(17);
        cout << book_arr[targetIndex].label.get_num_of_pages() << setw(30) << book_arr[targetIndex].label.get_publisher() << setw(17) << book_arr[targetIndex].get_availabilitiy() << setw(14) << book_arr[targetIndex].get_bookshelf();
        cout << setw(8) << book_arr[targetIndex].get_shelf() << setw(9) << book_arr[targetIndex].get_place();
        if (isAdmin) {
            cout << setw(14) << book_arr[targetIndex].get_borrowerID(1) << book_arr[targetIndex].get_bringBackDate() << " days left.";
        }
        cout << endl << endl;
    }
    else {
        cout << "Wrong book ID." << endl << endl;
    }
}

/// <summary>
/// Function to populate a member array with all recorded member data
/// </summary>
/// <param name="mem_list">Member array to be populated</param>
void get_AllRecordedMembers(Member* mem_list) {

    ifstream infile;
    infile.open("member.dat", ios::in);
    int mem_id, is_user_admin;
    string f_username, f_password;
    for (int i = 0; infile >> mem_id; i++) {
        infile >> f_username >> f_password >> is_user_admin;
        mem_list[i].set_id(mem_id);
        mem_list[i].set_username(f_username);
        mem_list[i].set_password(f_password);
        mem_list[i].isMemberAdmin(is_user_admin);
    }
    infile.close();
}


// Called before other class functions
int Member::member_count = 0;
int get_RecordedMemberCount(Member& mem) {

    int number_of_lines = 0;
    string line;
    ifstream infile;
    infile.open("member.dat", ios::in);

    while (getline(infile, line))
        ++number_of_lines;
    mem.member_count = number_of_lines;
    infile.close();
    return number_of_lines;
}

/// <summary>
/// Function for appending a member to the array of members
/// </summary>
/// <param name="member_list">The array containing members</param>
/// <param name="size">Size of the member array</param>
/// <param name="member">The member object to be appended</param>
/// <returns>Updated array with greater size</returns>
Member* append_to_list(Member member_list[], int& size, Member member) {

    // If the array contains nothing, make a new member list of size 1 and assign the given member object to avoid complications
    if (size == 0) {
        Member* new_list = new Member[1];
        new_list[0] = member;
        size++;
        delete[] member_list;
        return new_list;
    }

    int flag = 0;
    for (int i = 0; i < size; i++) {
        if (member_list[i] == member) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) {
        // Member already exists in the list
        return member_list;
    }
    else {
        Member* new_list = new Member[size + 1];
        for (int j = 0; j < size; j++) {
            new_list[j] = member_list[j];
        }
        new_list[size] = member;
        size++;
        delete[] member_list;
        return new_list;
    }
}

/// <summary>
/// Used for deleting a certain member from the given member list
/// </summary>
/// <param name="member_list">The member list</param>
/// <param name="member">The member to be deleted</param>
Member* delete_from_list(Member member_list[], int& size, Member member) {

    if (size <= 1) {
        if (member_list[0] == member) {
            size--;
            delete[] member_list;
            return NULL;
        }
        else {
            // No members in the list
            return member_list;
        }
    }

    int flag = 0, member_index = -1;
    for (int i = 0; i < size; i++) {
        if (member_list[i] == member) {
            member_index = i;
            flag = 1;
            break;
        }
    }
    if (flag == 1) {
        Member* new_list = new Member[size - 1];
        for (int j = member_index; j < size - 1; j++) {
            member_list[j] = member_list[j + 1];
        }
        for (int k = 0; k < size - 1; k++) {
            new_list[k] = member_list[k];
        }
        size--;
        delete[] member_list;
        return new_list;
    }
    else {
        // No such member found
        return member_list;
    }
}

/// <summary>
/// Generates a random ID for member and book objects.
/// </summary>
/// <returns>A random ID</returns>
int generate_id(bool mod) {
    if (mod == true) {
        int random_id;
        srand(time(NULL));
        random_id = rand() % 9000 + 1000;
        return random_id;
    }
    else {
        int random_id;
        srand(time(NULL));
        random_id = rand() % 90000 + 10000;
        return random_id;
    }
}

/// <summary>
/// Checks for a pending member in the data file.
/// </summary>
/// <param name="mem">Pending member.</param>
/// <returns>True if member is found, false otherwise.</returns>
bool check_pending(const Member& mem) {

    int mem_id, is_user_admin;
    string f_username, f_password;
    ifstream infile;
    infile.open("pending_member.dat", ios::in);
    if (!infile.is_open()) {
        cout << "Pending member data file not found!" << endl;
        infile.close();
        return false;
    }
    while (infile >> mem_id) {
        infile >> f_username >> f_password >> is_user_admin;
        if (mem.get_username().compare(f_username) == 0 && mem.get_password().compare(f_password) == 0) {
            infile.close();
            return true;
        }
    }
    // No such member found in the data file
    infile.close();
    return false;
}

/// <summary>
/// Writes a pending member to the data file.
/// </summary>
/// <param name="mem">Pending member.</param>
/// <returns>True if successful, otherwise false.</returns>
bool write_pending_member(const Member& mem) {

    ofstream outfile;
    outfile.open("pending_member.dat", ios::app);
    if (!outfile.is_open()) {
        cout << "Output data file not found!" << endl;
        outfile.close();
        return false;
    }
    if (mem.check_credentials()) {
        cout << "Member has already been approved." << endl;
        outfile.close();
        return false;
    }
    else if (check_pending(mem) == true) {
        cout << "Pending member already exists." << endl;
        outfile.close();
        return false;
    }
    else {
        outfile << left << setw(6) << mem.get_id() << setw(6) << " " << mem.get_username() << setw(6)
            << " " << mem.get_password() << setw(6) << " " << (int)mem.isMemberAdmin() << endl;
        cout << "Pending member successfully saved!" << endl;
        outfile.close();
        return true;
    }
}

/// <summary>
/// Deletes a pending members from the related data file.
/// </summary>
/// <param name="mem">Pending member.</param>
/// <returns>True if successful, false otherwise.</returns>
bool delete_pending_member(const Member& mem) {

    ifstream infile;
    ofstream outfile;
    int mem_id, is_user_admin;
    string f_username, f_password;
    infile.open("pending_member.dat", ios::in);
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
    outfile.open("pending_member.dat", ios::out);
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

    if (check_pending(mem)) {
        cout << "Error while deleting pending member!" << endl;
        return false;
    }
    else {
        cout << "Pending member successfully deleted" << endl;
        return true;
    }
}

/// <summary>
/// Gets the number of pending members and returns it.
/// </summary>
/// <returns>Number of pending members</returns>
int get_PendingMemberCount() {

    int number_of_lines = 0;
    string line;
    ifstream infile;
    infile.open("pending_member.dat", ios::in);

    while (getline(infile, line))
        ++number_of_lines;
    infile.close();
    return number_of_lines;
}

/// <summary>
/// Gets all the pending members from the pending members data file and fills the given array.
/// </summary>
/// <param name="pendingmem_list">Pending members array</param>
void get_AllPendingMembers(Member* pendingmem_list) {

    ifstream infile;
    infile.open("pending_member.dat", ios::in);
    int mem_id, is_user_admin;
    string f_username, f_password;
    for (int i = 0; infile >> mem_id; i++) {
        infile >> f_username >> f_password >> is_user_admin;
        pendingmem_list[i].set_id(mem_id);
        pendingmem_list[i].set_username(f_username);
        pendingmem_list[i].set_password(f_password);
        pendingmem_list[i].isMemberAdmin(is_user_admin);
    }
    infile.close();
}

//Need this func for changing string to boolean while file reading
bool stob(string& str) {
    return str != "0";
}

/// <summary>
/// counts how many books are in the file.
/// </summary>
/// <returns> number of books </returns>

int get_BookCount() {

    int number_of_lines = 0;
    string line;
    ifstream infile;
    infile.open("book.dat", ios::in);

    while (getline(infile, line))
        ++number_of_lines;
    infile.close();
    return number_of_lines;
}

/// <summary>
/// file reading function for books.
/// it gets book arr pointer, array size, and file path.
/// we use file path variable because function can be used more than one file
/// </summary>
/// <param name="book_arr"> getting books from calling function </param>
/// <param name="arr_size"> getting size of array </param>
/// <param name="filePath"> getting file path from the calling function for inputting to array </param>

void fReadFunc(Book* book_arr, int arr_size, string filePath) {  //TESTED
    ifstream inFile;
    inFile.open(filePath, ios::in);
    int i = 0;

    if (!inFile.is_open()) {
        cout << "File reading failed." << endl;
        inFile.close();
        return;

    }

    else {

        string line, substr;
        while (!inFile.eof() && i < arr_size) {
            getline(inFile, line);
            stringstream str(line);
            getline(str, substr, ';');
            book_arr[i].set_ID(stoi(substr));
            getline(str, substr, ';');
            book_arr[i].label.set_book_name(substr);
            getline(str, substr, ';');
            book_arr[i].label.set_edition(substr);
            getline(str, substr, ';');
            book_arr[i].label.set_author(substr);
            getline(str, substr, ';');
            book_arr[i].label.set_category(substr);
            getline(str, substr, ';');
            book_arr[i].label.set_num_of_pages(stoi(substr));
            getline(str, substr, ';');
            book_arr[i].label.set_publisher(substr);
            getline(str, substr, ';');
            book_arr[i].set_availability(stob(substr));
            getline(str, substr, ';');
            book_arr[i].set_bookshelf(stoi(substr));
            getline(str, substr, ';');
            book_arr[i].set_shelf(stoi(substr));
            getline(str, substr, ';');
            book_arr[i].set_place(stoi(substr));
            getline(str, substr, ';');
            book_arr[i].set_borrowerID(stoi(substr), 1);
            getline(str, substr, ';');
            book_arr[i].set_bringBackDate(stoi(substr));
            i++;
        }
        cout << "File import completed." << endl;
    }
    inFile.close();

}

/// <summary>
/// file writing function for books.
/// it gets book arr pointer, array size, and file path.
/// we use file path variable because function can be used more than one file
/// </summary>
/// <param name="book_arr"> getting books from calling function </param>
/// <param name="arr_size"> getting size of array </param>
/// <param name="filePath"> getting file path from the calling function for writing to different files to disc </param>

void fWriteFunc(Book* book_arr, int arr_size, string filePath) {  //TESTED
    ofstream outFile(filePath, ios::out);
    if (outFile.is_open()) {
        for (int i = 0; i < arr_size; i++) {
            outFile << book_arr[i].get_ID() << ";" << book_arr[i].label.get_book_name() << ";" << book_arr[i].label.get_edition() << ";";
            outFile << book_arr[i].label.get_author() << ";" << book_arr[i].label.get_category() << ";" << book_arr[i].label.get_num_of_pages() << ";";
            outFile << book_arr[i].label.get_publisher() << ";" << book_arr[i].get_availabilitiy() << ";" << book_arr[i].get_bookshelf() << ";";
            outFile << book_arr[i].get_shelf() << ";" << book_arr[i].get_place() << ";" << book_arr[i].get_borrowerID(1) << ";" << book_arr[i].get_bringBackDate() << "\n";
        }

        cout << "File exported successfully" << endl;
    }
    outFile.close();
}

/// <summary>
/// Assigns a borrower ID to the given book.
/// </summary>
/// <param name="book_arr">The array containing books.</param>
/// <param name="arr_size">Size of the given array.</param>
/// <param name="bookID">ID of the given book.</param>
/// <param name="userID">Borrower ID.</param>
bool change_borrowerID(Book* book_arr, int arr_size, int bookID, int userID) {  //TESTED
    int targetIndex, flag = 0, borrowerID, bringBackDate;
    for (int i = 0; i < arr_size; i++) {
        if (book_arr[i].get_ID() == bookID) {
            flag++;
            targetIndex = i;
            break;
        }
    }
    if (flag > 0) {
        get_allInfoaBook(book_arr, arr_size, bookID, 0);

        if (book_arr[targetIndex].get_borrowerID(1) == userID) {
            cout << "User has already borrowed this book." << endl << endl;
            return false;
        }

        if (book_arr[targetIndex].get_availabilitiy()) {
            book_arr[targetIndex].set_borrowerID(userID, 1);
            book_arr[targetIndex].set_availability(0);
            cout << endl << "Enter Bring Back Date: ";
            cin >> bringBackDate;
            while (bringBackDate < 1 || bringBackDate > 60) {
                if (bringBackDate < 1) {
                    cout << "Books cannot be borrowed for less than 1 day." << endl
                        << "Please enter a valid bring back date:";
                    cin >> bringBackDate;
                }
                else if (bringBackDate > 60) {
                    cout << "Books cannot be borrowed for longer than 60 days." << endl
                        << "Please enter a valid bring back date:";
                    cin >> bringBackDate;
                }
                cout << endl;
            }
            book_arr[targetIndex].set_bringBackDate(bringBackDate);

        }
        else {
            cout << "This book has already been borrowed." << endl;
            return false;
        }

        fWriteFunc(book_arr, arr_size, "book.dat");
        fReadFunc(book_arr, arr_size, "book.dat");
        cout << endl;

        cout << "BorrowerID and Bring Back Date of the book with ID " << bookID << " has been changed successfully." << endl;
        return true;
    }
    else {
        cout << "No matches with ID " << bookID << " for changing borrowerID" << endl;
        return false;
    }
}

/// <summary>
/// Returns the book from the borrower.
/// </summary>
/// <param name="book_arr">The array containing books.</param>
/// <param name="arr_size">Size of the given array.</param>
/// <param name="bookID">ID of the returned book.</param>
void change_borrowerID(Book* book_arr, int arr_size, int bookID) {
    int targetIndex, flag = 0;
    for (int i = 0; i < arr_size; i++) {
        if (book_arr[i].get_ID() == bookID) {
            flag++;
            targetIndex = i;
            break;
        }
    }
    if (flag != 0) {
        if (!book_arr[targetIndex].get_availabilitiy()) {
            book_arr[targetIndex].set_borrowerID(0, 1);
            book_arr[targetIndex].set_availability(1);
            book_arr[targetIndex].set_bringBackDate(0);

            fWriteFunc(book_arr, arr_size, "book.dat");
            fReadFunc(book_arr, arr_size, "book.dat");

            cout << "Borrowed book is successfully returned." << endl;
            return;
        }
        else {
            cout << "Book is in Library, not borrowed." << endl;
            return;
        }
    }
    else {
        cout << "No matches with ID " << bookID << " for returning." << endl;
        return;
    }
}

/// <summary>
/// this function is for main. If the admin wants to add book,
/// admin can add the book into array.
/// </summary>
/// <param name="book_arr"> getting books from calling function </param>
/// <param name="arr_size"> getting size of array </param>
/// <param name="isAdmin"> getting boolean parameter is admin or not for adding book</param>
/// <returns> is the process done or not? returns changed array if it's done, otherwise return null array. </returns>

Book* add_book(Book* book_arr, int& arr_size, bool isAdmin) {  
    if (isAdmin) {
        int x;
        string y;
        bool z, flag = 0;

        Book* new_arr = new Book[arr_size + 1];
        for (int i = 0; i < arr_size; i++) {
            new_arr[i] = book_arr[i];
        }
        delete[] book_arr;

        int id = generate_id(0);

        do {
            if (flag) {
                cout << "You've entered data which is existing." << endl;
                flag = 0;
            }

            int idflag;
            do {

                // In this loop, there is a slight chance that we will check the 
                // generated ID twice over but since the odds of this happening is 
                // small there shouldn't be any major performance issues
                idflag = 0;
                for (int i = 0; i < arr_size; i++) {
                    if (new_arr[i].get_ID() == id) {
                        idflag = 1;
                    }
                }
                if (idflag == 1) {
                    id = generate_id(0);
                    idflag = 0;
                    for (int i = 0; i < arr_size; i++) {
                        if (new_arr[i].get_ID() == id) {
                            idflag = 1;
                        }
                    }
                }
            } while (idflag == 1);

            new_arr[arr_size].set_ID(id);

            cout << "Enter book name: ";
            cin.ignore();
            getline(cin, y);

            for (int i = 0; i < arr_size; i++) {
                if (new_arr[i].label.get_book_name() == y) {
                    flag++;
                    continue;
                }
            }

            new_arr[arr_size].label.set_book_name(y);



            if (flag) {
                continue;
            }
            else {

                cout << "Enter edition of " << new_arr[arr_size].label.get_book_name() << " (like X. Edition): ";
                getline(cin, y);
                new_arr[arr_size].label.set_edition(y);

                cout << "Enter author of " << new_arr[arr_size].label.get_book_name() << ": ";
                getline(cin, y);

                new_arr[arr_size].label.set_author(y);

                cout << "Enter category of " << new_arr[arr_size].label.get_book_name() << ": ";
                getline(cin, y);

                new_arr[arr_size].label.set_category(y);

                cout << "Enter nums of pages of " << new_arr[arr_size].label.get_book_name() << ": ";
                cin >> x;

                new_arr[arr_size].label.set_num_of_pages(x);

                cout << "Enter publisher of " << new_arr[arr_size].label.get_book_name() << ": ";
                cin.ignore();
                getline(cin, y);

                new_arr[arr_size].label.set_publisher(y);

                cout << "Enter availability of " << new_arr[arr_size].label.get_book_name() << " (1 or 0): ";
                cin >> z;

                new_arr[arr_size].set_availability(z);

                cout << "Enter bookshelf of " << new_arr[arr_size].label.get_book_name() << ": ";
                cin >> x;

                new_arr[arr_size].set_bookshelf(x);

                cout << "Enter shelf of " << new_arr[arr_size].label.get_book_name() << ": ";
                cin >> x;

                new_arr[arr_size].set_shelf(x);

                cout << "Enter place of " << new_arr[arr_size].label.get_book_name() << ": ";
                cin >> x;

                new_arr[arr_size].set_place(x);

                cout << "Enter borrowerID of " << new_arr[arr_size].label.get_book_name() << " (If there is not, enter 0): ";
                cin >> x;

                new_arr[arr_size].set_borrowerID(x, isAdmin);

                cout << "Enter bring back date of " << new_arr[arr_size].label.get_book_name() << " in days (If there is not, enter 0): ";
                cin >> x;

                new_arr[arr_size].set_bringBackDate(x);
            }


        } while (flag);

        arr_size += 1;
        return new_arr;
    }

    else {
        cout << "You don't have permission to add book." << endl;
        return NULL;
    }
}

/// <summary>
/// this function is for main. If the admin wants to remove book,
/// admin can remove the book from array.
/// </summary>
/// <param name="book_arr"> getting books from calling function </param>
/// <param name="arr_size"> getting size of array </param>
/// <param name="isAdmin"> getting boolean parameter is admin or not for adding book</param>
/// <returns> is the process done or not? returns changed array if it's done, otherwise return null array. </returns>

Book* deleteBook(Book* book_arr, int& arr_size, int delete_BookID, bool isAdmin) {  //TESTED
    if (isAdmin) {
        int delete_index, flag = 0;
        for (int i = 0; i < arr_size; i++) {
            if (delete_BookID == book_arr[i].get_ID()) {
                flag++;
                delete_index = i;
                break;
            }
        }

        if (flag) {

            cout << book_arr[delete_index].label.get_book_name() << " is deleted." << endl;

            for (int i = delete_index; i < arr_size - 1; i++) {
                book_arr[i].set_ID(book_arr[i + 1].get_ID());
                book_arr[i].label.set_book_name(book_arr[i + 1].label.get_book_name());
                book_arr[i].label.set_edition(book_arr[i + 1].label.get_edition());
                book_arr[i].label.set_author(book_arr[i + 1].label.get_author());
                book_arr[i].label.set_category(book_arr[i + 1].label.get_category());
                book_arr[i].label.set_num_of_pages(book_arr[i + 1].label.get_num_of_pages());
                book_arr[i].label.set_publisher(book_arr[i + 1].label.get_publisher());
                book_arr[i].set_availability(book_arr[i + 1].get_availabilitiy());
                book_arr[i].set_bookshelf(book_arr[i + 1].get_bookshelf());
                book_arr[i].set_shelf(book_arr[i + 1].get_shelf());
                book_arr[i].set_place(book_arr[i + 1].get_place());
                book_arr[i].set_borrowerID(book_arr[i + 1].get_borrowerID(1), 1);
                book_arr[i].set_bringBackDate(book_arr[i + 1].get_bringBackDate());

            }
            Book* new_arr = new Book[arr_size - 1];
            for (int i = 0; i < arr_size - 1; i++) {
                new_arr[i] = book_arr[i];
            }
            delete[] book_arr;
            arr_size--;

            return new_arr;
        }

        else {
            cout << "There is no match for the id inputted by you." << endl;
        }
    }

    else {
        cout << "You don't have a permission to delete a book." << endl;
    }

}


int main()
{
    Admin admin{ 1000, "AAA", "1234" };
    User user1{ 1010, "AAB", "2131" };

    admin.write_member(admin);
    admin.write_member(user1);

    int bookcount = get_BookCount();
    Book* book_arr = new Book[bookcount];
    fReadFunc(book_arr, bookcount, "book.dat");

    Member member_counter;
    int member_count;
    member_count = get_RecordedMemberCount(member_counter);

    Member* member_list = new Member[member_count];
    get_AllRecordedMembers(member_list);

    for (int i = 0; i < member_count; i++) {
        member_list[i].display_member_info();
    }

    cout << endl << endl;

    int pending_member_count = get_PendingMemberCount();
    Member* pending_members = new Member[pending_member_count];
    get_AllPendingMembers(pending_members);


    cout << "---------Welcome to LMS---------" << endl;

    int main_op;
    do {

        cout << "1. Login" << endl;
        cout << "2. Signup" << endl;
        cout << "3. Exit" << endl << endl;
        cout << "Choose: ";
        cin >> main_op;

        if (main_op == 1) {
            Member* member = new Member;
            string username, password;
            cout << "----Member Login----" << endl;
            cout << "Username: ";
            cin >> username;
            cout << "Password: ";
            cin >> password;

            cout << endl;

            member->set_username(username);
            member->set_password(password);

            bool flag_pending_members = 0;

            if (pending_member_count > 0) {
                for (int i = 0; i < pending_member_count; i++) {
                    if ((pending_members[i].get_username().compare(member->get_username()) == 0) && (pending_members[i].get_password().compare(member->get_password()) == 0)) {
                        flag_pending_members = 1;
                        break;
                    }
                }
            }

            if (flag_pending_members == 1) {
                cout << "Your sign-up request is pending." << endl;
                continue;
            }

            bool flag_member_cred = 0;

            if (member_count > 0) {
                for (int i = 0; i < member_count; i++) {
                    if (member_list[i].get_username().compare(member->get_username()) == 0 &&
                        member_list[i].get_password().compare(member->get_password()) == 0) {
                        *member = member_list[i];
                        flag_member_cred = 1;
                        break;
                    }
                }
            }

            if (flag_member_cred == 1 && member->check_credentials() == true) {
                if (member->isMemberAdmin() == 1) {
                    Admin* admin = new Admin;
                    for (int i = 0; i < member_count; i++) {
                        if (member_list[i].isMemberAdmin() == true && member_list[i].get_username().compare(member->get_username()) && member_list[i].get_password().compare(member->get_password())) {
                            admin->set_id(member->get_id());
                            admin->set_username(member->get_username());
                            admin->set_password(member->get_password());
                            break;
                        }
                    }
                    delete member;

                    int admin_op;
                    do {
                        cout << "1. View Pending Members" << endl
                            << "2. View Members List" << endl
                            << "3. View Users List" << endl
                            << "4. Accept/Reject New Members" << endl
                            << "5. Delete Members" << endl
                            << "6. View All Books" << endl
                            << "7. Search For A Book" << endl
                            << "8. Add New Book" << endl
                            << "9. Delete Book" << endl
                            << "10. Make Another Member An Admin" << endl
                            << "11. Logout" << endl << endl
                            << "Choose:";

                        cin >> admin_op;

                        if (admin_op == 1) {
                            if (pending_member_count > 0) {
                                cout << left << setw(12) << "ID" << setw(9) << "Username"
                                    << setw(10) << "Password" << setw(9) << "Privilege" << endl
                                    << setw(12) << "--" << setw(9) << "--------"
                                    << setw(10) << "--------" << setw(9) << "---------" << endl;
                                for (int i = 0; i < pending_member_count; i++) {
                                    pending_members[i].display_member_info();
                                }
                                cout << endl;
                            }
                            else {
                                cout << "No pending members." << endl << endl;
                            }
                        }
                        else if (admin_op == 2) {
                            if (member_count > 0) {
                                cout << left << setw(12) << "ID" << setw(9) << "Username"
                                    << setw(10) << "Password" << setw(9) << "Privilege" << endl
                                    << setw(12) << "--" << setw(9) << "--------"
                                    << setw(10) << "--------" << setw(9) << "---------" << endl;
                                for (int i = 0; i < member_count; i++) {
                                    member_list[i].display_member_info();
                                }
                                cout << endl;
                            }
                            else {
                                cout << "No members in list." << endl;
                            }
                        }
                        else if (admin_op == 3) {
                            cout << left << setw(3) << "#" << setw(12) << "ID" << setw(9) << "Username"
                                << setw(10) << "Password" << setw(9) << "Privilege" << endl
                                << setw(3) << "-" << setw(12) << "--" << setw(9) << "--------"
                                << setw(10) << "--------" << setw(9) << "---------" << endl;
                            admin->display_non_admins();
                            cout << endl;
                        }
                        else if (admin_op == 4) {
                            if (pending_member_count > 0) {
                                cout << left << setw(3) << "#" << setw(12) << "ID" << setw(9) << "Username"
                                    << setw(10) << "Password" << setw(9) << "Privilege" << endl
                                    << setw(3) << "-" << setw(12) << "--" << setw(9) << "--------"
                                    << setw(10) << "--------" << setw(9) << "---------" << endl;
                                for (int i = 0; i < pending_member_count; i++) {
                                    cout << i + 1 << ". ";
                                    pending_members[i].display_member_info();
                                }
                                int member_choice;
                                cout << "Choose a member:";
                                cin >> member_choice;

                                while (member_choice < 1 || member_choice > pending_member_count) {
                                    cout << "Invalid input! Enter a valid input:" << endl;
                                    for (int i = 0; i < pending_member_count; i++) {
                                        cout << i + 1 << ". ";
                                        pending_members[i].display_member_info();
                                    }
                                    cout << endl;
                                    cin >> member_choice;
                                }

                                int accept_reject_choice;
                                cout << "1. Accept Member" << endl;
                                cout << "2. Reject Member" << endl << endl;
                                cin >> accept_reject_choice;

                                while (accept_reject_choice < 1 || accept_reject_choice > 2) {
                                    cout << "Invalid input! Enter a valid input:";
                                    cin >> accept_reject_choice;
                                }

                                if (accept_reject_choice == 1) {

                                    delete_pending_member(pending_members[member_choice - 1]);
                                    admin->write_member(pending_members[member_choice - 1]);

                                    member_list = append_to_list(member_list, member_count, pending_members[member_choice - 1]);
                                    pending_members = delete_from_list(pending_members, pending_member_count, pending_members[member_choice - 1]);
                                }
                                else if (accept_reject_choice == 2) {

                                    delete_pending_member(pending_members[member_choice - 1]);
                                    pending_members = delete_from_list(pending_members, pending_member_count, pending_members[member_choice - 1]);
                                }
                            }
                            else {
                                cout << "No pending member requests." << endl;
                            }

                        }

                        else if (admin_op == 5) {
                            if (member_count > 0) {
                                int recorded_counter = admin->get_user_count();
                                Member* user_list = new Member[recorded_counter];
                                recorded_counter = 0;

                                cout << left << setw(3) << "#" << setw(12) << "ID" << setw(9) << "Username"
                                    << setw(10) << "Password" << setw(9) << "Privilege" << endl
                                    << setw(3) << "-" << setw(12) << "--" << setw(9) << "--------"
                                    << setw(10) << "--------" << setw(9) << "---------" << endl;
                                for (int i = 0; i < member_count; i++) {
                                    // Member should be recorded but they shouldn't be an admin
                                    if (member_list[i].check_credentials() == true && member_list[i].isMemberAdmin() == false) {
                                        user_list[recorded_counter] = member_list[i];
                                        cout << recorded_counter + 1 << ". ";
                                        user_list[recorded_counter].display_member_info();
                                        recorded_counter++;
                                    }
                                }
                                cout << endl;

                                int member_choice;
                                cout << "Select member to delete:";
                                cin >> member_choice;

                                while (member_choice < 1 || member_choice > recorded_counter) {
                                    cout << "Invalid input! Enter a valid input:";
                                    cin >> member_choice;
                                }

                                member_list = delete_from_list(member_list, member_count, user_list[member_choice - 1]);
                                admin->delete_member(user_list[member_choice - 1]);
                                for (int i = 0; i < member_count; i++) {
                                    member_list[i].display_member_info();
                                }
                                cout << endl;

                                delete[] user_list;
                            }
                            else {
                                cout << "There are no members that can be deleted." << endl;
                            }
                        }
                        else if (admin_op == 6) {
                            get_allBooksInfo(book_arr, bookcount, admin->isMemberAdmin());
                            cout << endl;
                        }
                        else if (admin_op == 7) {
                            searchEngine(book_arr, bookcount);
                            cout << endl;
                        }
                        else if (admin_op == 8) {
                            book_arr = add_book(book_arr, bookcount, admin->isMemberAdmin());
                            fWriteFunc(book_arr, bookcount, "book.dat");
                            cout << endl;
                        }
                        else if (admin_op == 9) {
                            get_allBooksInfo(book_arr, bookcount, admin->isMemberAdmin());
                            cout << endl;

                            int choiceid;
                            cout << "Enter the ID of the book you would like to delete:";
                            cin >> choiceid;

                            book_arr = deleteBook(book_arr, bookcount, choiceid, admin->isMemberAdmin());
                            fWriteFunc(book_arr, bookcount, "book.dat");
                            cout << endl;
                        }
                        else if (admin_op == 10) {
                            int recorded_counter = admin->get_user_count();
                            Member* user_list = new Member[recorded_counter];
                            recorded_counter = 0;

                            cout << left << setw(3) << "#" << setw(12) << "ID" << setw(9) << "Username"
                                << setw(10) << "Password" << setw(9) << "Privilege" << endl
                                << setw(3) << "-" << setw(12) << "--" << setw(9) << "--------"
                                << setw(10) << "--------" << setw(9) << "---------" << endl;
                            for (int i = 0; i < member_count; i++) {
                                // Member should be recorded but they shouldn't be an admin
                                if (member_list[i].check_credentials() == true && member_list[i].isMemberAdmin() == false) {
                                    user_list[recorded_counter] = member_list[i];
                                    cout << recorded_counter + 1 << ". ";
                                    user_list[recorded_counter].display_member_info();
                                    recorded_counter++;
                                }
                            }
                            cout << endl;

                            int member_choice;
                            cout << "Select member to make an admin:";
                            cin >> member_choice;

                            while (member_choice < 1 || member_choice > recorded_counter) {
                                cout << "Invalid input! Enter a valid input:";
                                cin >> member_choice;
                            }
                            admin->make_MemberAdmin(user_list[member_choice - 1]);

                            // Update members_list
                            get_AllRecordedMembers(member_list);
                            for (int i = 0; i < member_count; i++) {
                                member_list[i].display_member_info();
                            }
                            cout << endl;

                            delete[] user_list;
                        }

                    } while (admin_op != 11);
                    delete admin;
                    cout << "Admin logged out." << endl << endl;
                }
                else {
                    User* user = new User;
                    for (int i = 0; i < member_count; i++) {
                        if (member_list[i].isMemberAdmin() == false && member_list[i].get_username().compare(member->get_username()) && member_list[i].get_password().compare(member->get_password())) {
                            user->set_id(member->get_id());
                            user->set_username(member->get_username());
                            user->set_password(member->get_password());
                            break;
                        }
                    }
                    delete member;

                    int user_op;
                    do {
                        user->get_borrowed_books(book_arr, bookcount);

                        cout << "1. View Borrowed Books" << endl
                            << "2. View Account Details" << endl
                            << "3. Search For A Book" << endl
                            << "4. Borrow A Book" << endl
                            << "5. Return A Book" << endl
                            << "6. Logout" << endl << endl
                            << "Choose:";

                        cin >> user_op;

                        if (user_op == 1) {
                            cout << "---Borrowed Books---" << endl << endl;
                            user->get_borrowed_book_count();
                            cout << endl;
                            user->display_borrowed_books();
                            cout << endl;
                        }
                        else if (user_op == 2) {
                            user->display_member_info();
                            cout << endl;
                        }
                        else if (user_op == 3) {
                            searchEngine(book_arr, bookcount);
                            cout << endl;
                        }
                        else if (user_op == 4) {
                            get_allBooksInfo(book_arr, bookcount, user->isMemberAdmin());
                            cout << endl;

                            int choiceid;
                            cout << "Enter the ID of the book you would like to borrow:";
                            cin >> choiceid;

                            Book book;
                            for (int i = 0; i < bookcount; i++) {
                                if (choiceid == book_arr[i].get_ID()) {
                                    book = book_arr[i];
                                    break;
                                }
                            }
                            int flag = change_borrowerID(book_arr, bookcount, choiceid, user->get_id());

                            if (flag == 1) {
                                user->add_borrowed_book(book);
                            }
                        }
                        else if (user_op == 5) {
                            user->display_borrowed_books();
                            cout << endl << endl;

                            if (user->get_borrowed_book_count() == 0) {
                                cout << endl;
                                continue;
                            }

                            int choiceid;
                            cout << "Enter the ID of the book you would like to return:";
                            cin >> choiceid;

                            Book book;
                            for (int i = 0; i < bookcount; i++) {
                                if (choiceid == book_arr[i].get_ID()) {
                                    book = book_arr[i];
                                    break;
                                }
                            }
                            change_borrowerID(book_arr, bookcount, choiceid);
                            user->remove_borrowed_book(book);
                            cout << endl;
                        }
                    } while (user_op != 6);
                    delete user;
                    cout << "User logged out." << endl << endl;
                }
            }
            else {
                cout << "Incorrect login info!" << endl << endl;
                delete member;
            }
        }
        else if (main_op == 2) {
            Member* member = new Member;
            string a_username, a_password;
            cout << "Enter a username:";
            cin >> a_username;
            cout << "Enter a password:";
            cin >> a_password;

            member->set_username(a_username);
            member->set_password(a_password);

            bool flag_pending_members = 0;

            if (pending_member_count > 0) {
                for (int i = 0; i < pending_member_count; i++) {
                    if ((pending_members[i].get_username().compare(member->get_username()) == 0) && (pending_members[i].get_password().compare(member->get_password()) == 0)) {
                        flag_pending_members = 1;
                        break;
                    }
                }
            }

            if (flag_pending_members == 1) {
                cout << "Your sign-up request is already pending." << endl;
                continue;
            }

            int signup_choice = -1;
            while (member->check_credentials() == true && signup_choice != 2) {
                cout << "This member already exists." << endl
                    << "1. Create new account" << endl
                    << "2. Exit" << endl << endl;
                cout << "Choose:";
                cin >> signup_choice;

                if (signup_choice == 1) {
                    cout << "Enter a username:";
                    cin >> a_username;
                    cout << "Enter a password:";
                    cin >> a_password;

                    member->set_username(a_username);
                    member->set_password(a_password);
                }
            }

            if (signup_choice == 2) {
                delete member;
                continue;
            }

            member->set_id(generate_id(1));

            // We want the generated ID to be unique so we have to check whether
            // the generated ID for this member is unique or not. If the isn't unique
            // then we will have to keep generating an ID until the generated ID is unique
            int flag;
            do {

                // In this loop, there is a slight chance that we will check the 
                // generated ID twice over but since the odds of this happening is 
                // small there shouldn't be any major performance issues
                flag = 0;
                for (int i = 0; i < member_count; i++) {
                    if (member_list[i].get_id() == member->get_id()) {
                        flag = 1;
                    }
                }
                if (flag == 1) {
                    member->set_id(generate_id(1));
                    flag = 0;
                    for (int i = 0; i < member_count; i++) {
                        if (member_list[i].get_id() == member->get_id()) {
                            flag = 1;
                        }
                    }
                }
            } while (flag == 1);

            member->display_member_info();
            cout << endl << "Your account approval is now pending." << endl;

            pending_members = append_to_list(pending_members, pending_member_count, *member);
            write_pending_member(*member);
            delete member;
        }

    } while (main_op != 3);
    delete[] book_arr;
    delete[] member_list;
    delete[] pending_members;

    cout << endl << "LMS Terminated." << endl;
    return(0);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
