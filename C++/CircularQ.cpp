#include <iostream>
#include <string>
using namespace std;


class CircularQueue{
    public:
    int front;
    int rear;
    string arr[3];
    int size;

    int isEmpty(){
        if (front ==-1){
            return true;
        }
        return false;
    }
    int isFull(){
        if ((front -1 == rear)||(front == 0 && rear == size-1)){
            return 1;
        }
        return 0;
    }

    void enqueue(){
        string name;
        if (isFull() ==true){
            cout << "Queue is full."<<endl;
        }
        else {
            cout <<"Enter name to add into queue : ";
            cin >> name;
            if (isEmpty() == true){
            front = 0;
            rear = 0;
            arr[rear] = name;
        }
            else{
                rear = (rear+1)%size;
                arr[rear] = name;
        }
        }
    }
    void dequeue(){
        if (isEmpty() == true){
            cout <<"Queue is empty, nothing to dequeue."<<endl;
        }
        else if (front == rear){
            arr[front] = "";
            front = -1;
            rear = -1;
            
        }
        else{
            arr[front] = "";
            front = (front+1)%size;
        }

    }
    void display(){
        int i = 1;
        int temp;
        if (isEmpty() == true){
            cout <<"Nothing to display, queue is empty. \n";
        }
        else {
            cout << "Queue :"<<endl;
            temp = front;
            while (temp != rear) {
                cout <<"Number "<<i<<" in queue : "<<arr[temp]<<endl;
                temp = (temp+1)%size;
                i++;
            }
            cout <<"Number "<<i++<<" in queue : "<<arr[temp]<<endl;
        }
    }

};// rmb semi colon to end the class


int main(){
    CircularQueue cq;
    cq.front = -1;
    cq.rear = -1;
    // cout <<"Enter 3 names : "<<endl;
    // cin >> cq.arr[0] >> cq.arr[1] >>cq.arr[2]; // to get multiple inputs jsut do multiples >>
    cq.size = sizeof(cq.arr)/sizeof(cq.arr[0]);
    // cout <<cq.size;
    cq.enqueue();
    cq.enqueue();
    cq.enqueue();
    cq.dequeue();
    cq.enqueue();
    cq.enqueue();
    // cq.dequeue();
    // cq.dequeue();
    // cq.dequeue();
    cq.display();
    return 0;
}