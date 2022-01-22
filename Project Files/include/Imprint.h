#pragma once

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Imprint
{
private:
    string book_name;
    string edition;
    string author;
    string category;
    int num_of_pages;
    string publisher;
    string Label;
public:
    //Default Constructor

    Imprint() : book_name{ "None" }, edition{ "None" }, author{ "None" },
        category{ "None" }, num_of_pages{ 0 }, publisher{ "None" } {}

    //Parameterized Constructor

    Imprint(string b_name, string _edition, string _author, string _category,
        int num_p, string _publisher) : book_name{ b_name }, edition{ _edition },
        author{ _author }, category{ _category }, num_of_pages{ num_p }, publisher{ _publisher } {}

    //Functions to set Label information;

    void set_book_name(string b_name) {
        this->book_name = b_name;
    }
    void set_edition(string _edition) {
        this->edition = _edition;
    }
    void set_author(string _author) {
        this->author = _author;
    }
    void set_category(string _category) {
        this->category = _category;
    }
    void set_num_of_pages(int num_p) {
        this->num_of_pages = num_p;
    }
    void set_publisher(string _publisher) {
        this->publisher = _publisher;
    }

    //Functions to get Label information

    string get_book_name() const {
        return book_name;
    }
    string get_edition() const {
        return edition;
    }
    string get_author() const {
        return author;
    }
    string get_category() const {
        return category;
    }
    int get_num_of_pages() const {
        return num_of_pages;
    }
    string get_publisher() const {
        return publisher;
    }

    //Function to get the label (imprint)
    string get_Label() {
        ostringstream labelstream; //Used this method to insert variables in Label string
        string page = to_string(num_of_pages); //Used to convert int to string
        string _edition = edition;
        labelstream << book_name << ", " << _edition << ", " << author << ", " << category << ", " << page << ", " << publisher;
        Label = labelstream.str();
        return Label;
    }
};

