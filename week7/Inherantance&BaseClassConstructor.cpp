#include<iostream> 

using namespace std; 

class person { 
// consreuctor
protected : 
    string name;
    int age;
public: 
// constructor declatation 
//Person(string name, int age ) {  they must not have / refrence the same name variables
person(string n, int m) { 
    name = n ; 
    age = m; 
}

//METHODS FOR THE STUDENT CLASS 
string getName() { 
    return name; 
}
int getAge() { 
    return age; 
}
// Method for display 
void display() { 
    cout <<"Name: " << name << " "; 
     cout << "Age: " << age << endl; 
}

};
// declaring Member variables (in both classes)

class student : public person { 
private : 
    long studentId; 
    string gradeLevel;
public : 
    student(string n, int m, long id, string grade) : person(n,m) { 
        cout << "Student ID " << id << endl; 
        studentId = id; // get the student id from the constructor and assign it to the member variable 
        gradeLevel = grade;
    }
    void display() {
        person::display();
        cout << "Student ID: " << studentId << endl;
    }
    // void grad(string name, int age, long id, string gradeLevel) : person(name, age) { 
    //     person::display();

    // }
};
int main () { 
// create a student class that inherits from peron 
person student1("chris",20); 
student student3("jose", 43, 30020202,"Freshman");
student student2("cris", 25, 5002379164, "Sophomore");
cout << "Name " << student1.getName() << endl; 
cout << "Age " << student2.getAge() << endl; 
student2.display(); 
//student student3("jose", 43, 30020202,"Freshman");
student3.display();
return 0;
}