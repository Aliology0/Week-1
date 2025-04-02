#ifndef BOOK_H
#define BOOK_H
#include <iostream>
using namespace std;

class Book
{
private:
    int ID;
    string Author;
    string Title;
    int Year;
    bool Available;
    double Price;

public:
    Book();
    ~Book();

    // Setters
    void SetID(int id);
    void SetAuthor(string author);
    void SetTitle(string title);
    void SetYear(int year);
    void SetAvailable(bool available);
    void SetPrice(double price);

    // Getters
    int GetID();
    string GetAuthor();
    string GetTitle();
    int GetYear();
    bool GetAvailable();
    double GetPrice();

    void DisplayBook();
};

#endif