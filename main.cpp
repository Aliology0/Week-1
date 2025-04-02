#include "Book.cpp"
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int booksCount;
    cout << "Enter how many books you want to add: ";
    cin >> booksCount;
    vector<Book> books(booksCount);
    cin.ignore();

    for (int i = 0; i < booksCount; i++)
    {
        string author, title;
        int year;
        bool available;
        double price;

        cout << "Enter Author: ";
        getline(cin, author);
        cout << "Enter Title: ";
        getline(cin, title);
        cout << "Enter Year: ";
        cin >> year;
        cout << "Enter Available: ";
        cin >> available;
        cout << "Enter Price: ";
        cin >> price;
        cin.ignore();

        books[i].SetID(i + 1);
        books[i].SetAuthor(author);
        books[i].SetTitle(title);
        books[i].SetYear(year);
        books[i].SetAvailable(available);
        books[i].SetPrice(price);
    }
    for (int i = 0; i < booksCount; i++)
    {
        books[i].DisplayBook();
    }
    return 0;
}