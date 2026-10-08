#include<iostream>
#include<string>

using namespace std;


//complete the blank to create a car class
// that contains an engine composition

class engine { 
    private : 
    string engineType;
    int horsepower; 
    public : 
    engine(int hp, string type) { 
        horsepower = hp; 
        engineType = type;

    }
   void displayinfo() { 
    cout << "Engine Type: " << engineType << endl;
    cout << "Horsepower: " << horsepower << endl;
   } 
};
class car { 
    private :
    string make;
    string model;
    engine eng; // composition relationship
    public :
    car(string maketype, string modeltype,string eningeType){ 
        make = makeType; 
        model = modelType;
        
    } 
};

int main() { 


    return 0; 

}