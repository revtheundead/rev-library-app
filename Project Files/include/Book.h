#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "Imprint.h";

using namespace std;

class Book
{
private:
    int ID, bookshelf, shelf, place, borrowerID, bringBackDate;
    bool availability;


public:
    Imprint label;

    Book() {

        //Default Constructor

        availability = 1;
        ID = 0;
        bookshelf = 0;
        shelf = 0;
        place = 0;
        borrowerID = 0;
        bringBackDate = 0;

    }

    Book(int _ID, int _bookshelf, int _shelf, int _place, bool _availability, string book_name, string edition, string author, string category, int num_of_pages, string publisher, int _borrowerID, int _bringBackDate) {

        //Parameterized Constructor

        ID = _ID;
        bookshelf = _bookshelf;
        shelf = _shelf;
        place = _place;
        availability = _availability;
        borrowerID = _borrowerID;
        bringBackDate = _bringBackDate;
        label.set_book_name(book_name);
        label.set_edition(edition);
        label.set_author(author);
        label.set_category(category);
        label.set_num_of_pages(num_of_pages);
        label.set_publisher(publisher);

    }

    //get functions

    int get_ID() const {
        return ID;
    }

    int get_bookshelf() const {
        return bookshelf;
    }

    int get_shelf() const {
        return shelf;
    }

    int get_place() const {
        return place;
    }

    bool get_availabilitiy() const {
        return availability;
    }

    int get_borrowerID(bool isAdmin) {
        if (isAdmin)
            return borrowerID;
        else {
            cout << "You have to be admin to learn borrower ID" << endl;
            return 0;
        }
    }

    int get_bringBackDate() {
        return bringBackDate;
    }

    //set functions

    void set_ID(int _ID) {
        ID = _ID;
    }

    void set_bookshelf(int _bookshelf) {
        bookshelf = _bookshelf;
    }

    void set_shelf(int _shelf) {
        shelf = _shelf;
    }

    void set_place(int _place) {
        place = _place;
    }

    void set_availability(bool _availability) {
        availability = _availability;
    }

    void set_borrowerID(int _borrowerID, bool isAdmin) {
        if (isAdmin) {
            borrowerID = _borrowerID;
        }
        else
            cout << "You don't have permission to change borrowerID." << endl;
    }

    void set_bringBackDate(int _bringBackDate) {
        bringBackDate = _bringBackDate;
    }

    //getting only information of a book.(No header)

    void display_book_info() {
        cout << left << setw(7) << ID << setw(33) << label.get_book_name() << setw(15) << label.get_edition()
            << setw(35) << label.get_author() << setw(25) << label.get_category() << setw(17)
            << label.get_num_of_pages() << setw(30) << label.get_publisher() << setw(17) << availability << setw(14) << bookshelf
            << setw(8) << shelf << setw(9) << place << setw(14) << borrowerID << bringBackDate << "days left." << endl;
    }
};

