#include<climits>
class StacksUsingArray{
int *data;
int nextIndex;
int capacity;
public:
// StacksUsingArray(int totalSize){
//     data = new int[totalSize];
//     nextIndex = 0;
//     capacity = totalSize;
// }

// Dynamic Stack
StacksUsingArray(){
    capacity = 4;
    nextIndex = 0;
    data = new int[capacity];
}
int size(){
    return nextIndex;
}
bool isEmpty(){
    // if(nextIndex==0){
    //     return true;
    // }
    // return false;
    return nextIndex==0;
}
void push(int element){
    if(nextIndex==capacity){
        int *newData = new int[2*capacity];
        for(int i = 0;i<capacity;i++){
            newData[i] = data[i];
        }
        delete []data;
        data = newData;
        capacity *=2;
        // cout<<"Stack is Full"<<endl;
        // return;
    }
    data[nextIndex] = element;
    nextIndex++;
}
int pop(){
    if(nextIndex==0){
        cout<<"Stack is empty"<<endl;
        return INT_MIN;
    }
    nextIndex--;
    return data[nextIndex];;
}
int top(){
    // if(nextIndex==0){
    //     cout<<"Stack is empty"<<endl;
    //     return INT_MIN;
    // }
    return data[nextIndex-1];
}
};