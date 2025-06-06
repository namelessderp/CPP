#include <iostream>
#include <string>
using namespace std;


int *bubblesort(int arr[5],int size){ // int * to return address
    int i;
    int *ptr; //pointer to store the address of the memory '*' means address 
    ptr = new int(5);arr;
    int temp;
    bool swap = true;
    while (swap == true){
        swap = false;
        for (i = 1;i<size;i++){
            if (arr[i]<arr[i-1]){
                temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp;
                swap = true;
            }
        }

    } 

    ptr = arr; // store address of allocated memory arr
    return ptr;
}


void display(int *ptr,int size){
    int i;
    cout <<"Sorted array\n";
    for (i=0;i<size;i++){
        cout<<ptr[i]<<endl;
    }
}
int main(){
    int * ptr;
    int arr[5] = {100,90,120,130,100};
    int size = sizeof(arr)/sizeof(arr[0]);
    ptr = bubblesort(arr,size); //returns address of sorted array
    display(ptr,size);
    return 0;
}