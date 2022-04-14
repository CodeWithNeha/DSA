#include<iostream>
using namespace std;
void reverseWord(char arr[],int low,int high){
    while(low<high){
        char temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}
int main(){
    char arr[300];
    cin.getline(arr,200);
    int pre = 0;
    int i = 0;
    for(i = 0;i<strlen(arr);i++){
        if(arr[i]==' '){
            reverseWord(arr,pre,i-1);
            pre = i+1;
        }
    }
    reverseWord(arr,pre,i-1);
    cout<<arr;
}