#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct Book {
    string title;
    string author;
    double price;
};

void displayBook(const Book& book) {
    cout << "Title: " << book.title << ", Author: " << book.author << ", Price: $" << book.price << endl;
}

bool compareByPrice(const Book& b1, const Book& b2) {
    return b1.price < b2.price;
}

int main() {
    vector<Book> books = {
        {"Book A", "Author A", 450},
        {"Book B", "Author B", 200},
        {"Book C", "Author C", 300},
        {"Book D", "Author D", 150},
        {"Book E", "Author E", 600},
        {"Book F", "Author F", 950},
        {"Book G", "Author G", 600}
    };

    vector<Book> affordableBooks;
    for (const auto& book : books) {
        if (book.price < 500) {
            affordableBooks.push_back(book);
        }
    }
    sort(affordableBooks.begin(), affordableBooks.end(), compareByPrice);

    cout << "Top books with price less than $500:" << endl;
    int count = min(5, static_cast<int>(affordableBooks.size()));
    for (int i = 0; i < count; ++i) {
        displayBook(affordableBooks[i]);
    }

    return 0;
}