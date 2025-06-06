#include <iostream>
#include <string>
using namespace std;

struct myStruct{
    int myNum;
    string firstName; // c++ way
    string lastName;
} ; // same as C


int main(){
    myStruct s1;
    myStruct s2;
    s1.myNum = 1;
    s1.firstName = "John";
    s1.lastName = "Tan";
    cout<<s1.myNum<<"\n";
    cout<<"S1 Full name : "<<s1.firstName + " " + s1.lastName <<"\n";
    s2.myNum = 5;
    s2.firstName = "James";
    s2.lastName = "Lee";
    cout<<s2.myNum<<"\n";
    cout<<"S2 Full name : "<<s2.firstName + " " + s2.lastName <<"\n";
    return 0;
}