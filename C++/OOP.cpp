#include <iostream>
#include <string>

using namespace std;
class myClass{ // class
    private: // no need to mention if u want private, can just do int priNum without it and it will still be private.
    int priNum;// only can access in class

    public: //access specifier
    string firstName;
    string lastName;
    int sum(int x,int y){ //method constructor
        return x+y;
    }
    
};



int main(){
    myClass myObj; //giving myObj myClass object
    myObj.firstName = "John";
    myObj.lastName = "Tan";
    // myObj.priNum = 50; // not allowed, private
    string fullName = myObj.firstName + " " + myObj.lastName;
    cout<< "Full name : "<<fullName<<"\n";
    cout<<"Sum of the numbers : "<<myObj.sum(1,2)<<"\n";
    return 0;
}