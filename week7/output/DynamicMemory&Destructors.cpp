#include<iostream>
#include<string>
#include<vector>

using namespace std;
// complete the blank to properly allocate and delocate memory 

class book { 
    private: 
    string title;
    public : 
    book(string t = "") {
        title = t;
        cout <<"Book created: " << title << endl;
    }
    ~book() {  // destructor 
       // title =" " ;
        cout << "Book deleted " << title << endl;    
    } 

    void info() { 
        cout << "Book title: " << title << endl;
    }

};

int main () { 
//decalaration anad allocatie array 
// allocating a 3 book dynamucally
// book *books = new book[3];
// {


// books[0] = book("C++ Programming");
// books[1] = book("Java Programming");
// books[2] = book("Python Programming");
// // display the book information
// //books[0].info();
// // the issue with the code is that its redundant using a vector would be better to store the books and display them in a loop

// }
vector<book> books;
books.emplace_back("C++ Programming");
books.emplace_back("Java Programming");
books.emplace_back("Python Programming");

books[0].info();

    return 0; // vec

}