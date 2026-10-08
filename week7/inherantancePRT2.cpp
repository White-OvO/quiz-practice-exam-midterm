#include <iostream>
#include<string>
using namespace std;
// Inheritance and Base Class Constructor
// crete a student class that inherits from Person

class Person  { 
protected: 
string name; 
int age; 
public : // instance variables 
Person(string n,int m ) { 

name = n;
age = m; 

}
void display() { 
    cout << "Name: " << name << endl; 
    cout << "Age: " << age << endl;
}
};

class student : public Person { 
private : 
int studentId;

public : 
student(string n, int m, int studentId) : Person(n,m) { 
   this->studentId = studentId;
}

void display() { 
Person :: display(); 
cout << "Student Name: " << name << endl;
cout << "Student ID: " << studentId << endl;
}
};

int main() { 
student student1("chris" , 30, 294394);
student1.display();

return 0; 



}