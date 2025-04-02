#include "Book.hpp"

Book::Book()
{
    ID = 0;
    Author = "";
    Title = "";
    Year = 0;
    Available = false;
    Price = 0.0;
}
// Setters
void Book::SetID(int id)
{
    ID = id;
}
void Book::SetAuthor(string author)
{
    Author = author;
}
void Book::SetTitle(string title)
{
    Title = title;
}
void Book::SetYear(int year)
{
    Year = year;
}
void Book::SetAvailable(bool available)
{
    Available = available;
}
void Book::SetPrice(double price)
{
    Price = price;
}

// Getters
int Book::GetID()
{
    return ID;
}
string Book::GetAuthor()
{
    return Author;
}
string Book::GetTitle()
{
    return Title;
}
int Book::GetYear()
{
    return Year;
}
bool Book::GetAvailable()
{
    return Available;
}
double Book::GetPrice()
{
    return Price;
}
void Book::DisplayBook()
{
    cout << "ID: " << ID << "\n";
    cout << "Author: " << Author << "\n";
    cout << "Title: " << Title << "\n";
    cout << "Year: " << Year << "\n";
    cout << "Available: " << Available << "\n";
    cout << "Price: " << Price << "\n";
}

Book::~Book()
{
}