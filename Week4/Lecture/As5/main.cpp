#include <iostream>
//#include <string>

class Book {
private:
    std::string _title;
    int _pages;

public:
    //Normi
    Book(const std::string& title, int pages)
        : _title(title), _pages(pages)
    {
        std::cout << "Book created: " << _title << "\n";
    }
    //Kopio
    Book(const Book& other)
        : _title(other._title), _pages(other._pages)
    {
        std::cout << "Copy constructor called for " << _title << "\n";
    }

    void print() {
        std::cout << "Title: " << _title << ", pages: " << _pages << "\n";
    }
};

int main() {
    Book b1("C++ Basics", 200);
    Book b2 = b1;  

    b1.print();
    b2.print();
    return 0;
}
