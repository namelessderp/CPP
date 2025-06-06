#include <iostream> //headfile library
#include <string> //to use string
#include <cmath>// use math function
using namespace std; //use library from std
// run compiler g++, press the settings wheel. gcc is for C
//no need format identifiers unlike C (%i etc)
// can insert new line by adding endl like cout<<"Hello" <<endl;
// in c++ can use bool , bool myBoolean = true 
// double have precision of about 15 digits while float can only up to 6 or 7 decimal digits
// get string length, use string.length() or string.size()
//max(x,y), min(x,y)




int main(){
    bool myBoolean = true; //true = 1, false = 0
    string myName = "John ";// string in C++ can just type string
    string surname = "Tan";
    string fullName = myName + surname;
    int myNum = 15;
    double myFloat = 1.1; //double  is float 1.0 will output 1
    cout <<"Hello World\n"; //cout means command out (output)
    cout <<"'Whats' up\n";
    cout << 3<< "\n"; // can just output integer like this
    cout<<myName + surname<<endl; //string concatenation same as python for c++
    cout<<myNum<<endl;
    cout<< myFloat<<"\n";
    cout<<myBoolean<<"\n";//returns 1
    cout <<"Length size : "<< myName.length()<<"\n";// returns length of string


    return 0;
}