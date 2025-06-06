#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int binary_search(int low, int high, int key,int arr[5]){
    if (low < high){
        int mid = floor((low+high)/2);
        if (arr[mid] == key){
            return mid;
        }
        else if (key < arr[mid]){
            return binary_search(low,mid-1,key,arr);
        }
        else{
            return binary_search(mid+1,high,key,arr);
        }
    }
    return -1;
}

int main(){
    int arr[5] = {10,20,30,40,50};
    int key = 50;
    int size = sizeof(arr)/sizeof(arr[0]);
    int posn = binary_search(0,size,key,arr);
    if (posn !=-1){
        cout <<"Key in position : "<<posn<<endl;
    }
    else{
        cout <<"Key not in array."<<endl;
    }
    return 0;
}