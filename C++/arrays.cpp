#include <iostream> //headfile library
#include <string> // to use string
using namespace std;



int main(){
    int myNumbers[5] = {10,20,30,40,50};
    int size = sizeof(myNumbers)/sizeof(myNumbers[0]);
    for (int i:myNumbers){ //one way to traverse array
        cout<<"Number is : "<<i<<"\n";
    }
    cout<<"--------------------\n";
    for (int i = 0;i<size;i++){ //another way to traverse array
        cout<<"Number 2 is :"<<myNumbers[i]<<"\n";
    }
    return 0;
}