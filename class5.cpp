#include <bits/stdc++.h>
using namespace std;
class book 
{
    int isbn, cp;
public:
    string bname, author;
    book(string t, string a, int is, int c) {
        bname = t;
        author = a;
        isbn = is;
        cp = c;
    }
    void issuebook() {
        cp--;
        cout << "Issued Book:\n";
        cout << "Title : " << bname << endl;
        cout << "Author : " << author << endl;
        cout << "Book Number : " << isbn << endl;
        cout << "Copies left : " << cp << endl;
    }
    void addcp(int n)
    {
        cp=cp+n;
        cout << "Added - " << n << " Copies\n";
    }
    void details() {
        cout << "Title : " << bname << endl;
        cout << "Author : " << author << endl;
        cout << "Book Number : " << isbn << endl;
        cout << "Copies left : " << cp << endl;
    }
};
int main() {
    string bookname, authorname;
    int isbn, copiesa,add;

    cout << "Enter the Book Name, Author name, issue number and copies available: ";
    cin >> bookname >> authorname >> isbn >> copiesa;

    book b(bookname, authorname, isbn, copiesa);
    b.issuebook();
    cout << "Enter the added number of books : ";
    cin >> add;
    b.addcp(add);
    b.details();

    return 0;
}
