#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Member.h"
#include "Book.h"


class User :
    public Member
{
private:
    vector<Book> borrowed_books;
public:
    /// <summary>
    /// Default constructor
    /// </summary>
    User() : Member() {}

    /// <summary>
    /// Parameterized constructor
    /// </summary>
    /// <param name="_id">User ID</param>
    /// <param name="_username">User username</param>
    /// <param name="_password">User password</param>
    User(int _id, string _username, string _password) : Member(_id, _username, _password) {}

    virtual bool operator==(const User& user) {

        return ((this->member_id == user.member_id) &&
            (this->username.compare(user.username) == 0) &&
            (this->password.compare(user.password) == 0) &&
            (this->isAdmin == user.isAdmin));
    }

    virtual User& operator=(const User& user) {

        if (this == &user) {
            return *this;
        }

        borrowed_books.clear();
        borrowed_books = user.borrowed_books;
        member_id = user.member_id;
        username = user.username;
        password = user.password;
        isAdmin = user.isAdmin;

        return *this;
    }

    /// <summary>
    /// Function to display borrowed books
    /// </summary>
    void display_borrowed_books() const {

        int count = 0;
        if (borrowed_books.empty() == false) {
            for (auto& book : borrowed_books) {
                if (book.label.get_book_name().compare("None") != 0) {
                    count++;
                    cout << left << count << ". " << book.get_ID() << " " << book.label.get_book_name() << endl;
                }
            }
        }
        else {
            cout << "Member has not borrowed any books yet" << endl;
        }
    }

    int get_borrowed_book_count() const {
        cout << "Current number of books: " << borrowed_books.size() << endl;
        return (int)borrowed_books.size();
    }

    /// <summary>
    /// Function to add a book to borrowed books vector
    /// </summary>
    /// <param name="book">The book to be added</param>
    void add_borrowed_book(Book book) {

        if (borrowed_books.size() <= 10) {
            for (auto& b : borrowed_books) {
                if (book.label.get_book_name().compare(b.label.get_book_name()) == 0) {
                    // Book has already been borrowed
                    return;
                }
            }
            borrowed_books.push_back(book);
        }
        else {
            cout << "No more than 10 books can be borrowed at a time" << endl;
        }
    }

    /// <summary>
    /// Used to remove a borrowed book from borrowed books vector
    /// </summary>
    /// <param name="book">The book to be removed</param>
    void remove_borrowed_book(Book book) {

        if (borrowed_books.empty() == true) {
            cout << "This member has not borrowed any books." << endl;
            return;
        }
        int book_index = -1;
        for (int i = 0; i < borrowed_books.size(); i++) {
            if (borrowed_books[i].label.get_book_name().compare(book.label.get_book_name()) == 0) {
                book_index = i;
                break;
            }
        }
        if (book_index == -1) {
            cout << "No such book has been borrowed by the member." << endl;
            return;
        }
        else {
            //Move the book to the end of the vector and delete it pop_back() func
            borrowed_books[book_index] = borrowed_books.back();
            borrowed_books.pop_back();
            cout << "Book successfully removed from borrowed books list." << endl;
            return;
        }
    }

    void get_borrowed_books(Book* book_arr, int arr_size) {
        borrowed_books.clear();
        for (int i = 0; i < arr_size; i++) {
            if (book_arr[i].get_borrowerID(1) == this->member_id) {
                add_borrowed_book(book_arr[i]);
            }
        }
    }
};

