#include<iostream>
using namespace std;
class DynamicArray{
    int *data;
    int nextIndex;
    int capacity;
    public:
    DynamicArray(){
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }
    void add(int element){
        if(capacity==nextIndex){
            int *newData = new int[2*capacity];
            for(int i = 0;i<capacity;i++){
                newData[i] = data[i];
            }
            data = newData;
        }
       // delete []data;
        capacity *=2;
        data[nextIndex] = element;
        nextIndex++;
    }
    int get(int i){
        if(i<nextIndex){
            return data[i];
        }
        return -1;
    }
    void display(){
        for(int i = 0;i<nextIndex;i++){
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }
    void addElement(int i,int element){
        if(i<nextIndex){
            data[i] = element;
        }
        else if(i==nextIndex){
            add(element);
        }
        else{
            return;
        }
    }
    // Deep Copy
    DynamicArray(DynamicArray &d1){
        this -> data = new int[d1.capacity];
        for(int i = 0;i<d1.nextIndex;i++){
            data[i] = d1.data[i];
        }
        this -> nextIndex = d1.nextIndex;
        this->capacity = d1.capacity;
    }
};