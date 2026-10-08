#include<iostream>

using namespace std;

int main() {
// complete the blocks 
// int declration 
int num = 42; 
// declare a pointer to an integer and assign it the address of num
int  *ptr; // pointer declaration 
ptr = &num; // getting the address of num
// change number to 100 
*ptr = 100; 
 cout << "Value of Num: " << num << endl;
 cout << "Address of Num: " << &num << endl;
 cout << "Value via pointer: " << *ptr << endl;
    return 0;
}
/*

& gets the address of a variable
* dereferences a pointer (reads or writes through it)

*/