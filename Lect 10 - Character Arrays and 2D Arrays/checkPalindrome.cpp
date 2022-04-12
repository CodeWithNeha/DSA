#include<iostream>
using namespace std;
bool isPalindrome(char a[]){
    int i = 0,count = 0;
    while(a[i]!='\0'){
        count++;
        i++;
    }
    int low = 0,high = count-1;
    while(low<high){
        if(a[low]!=a[high]){
            return false;
        }
        low++;
        high--;
    }
    return true;
}
int main(){
    char a[100];
    cin>>a;
    cout<<isPalindrome(a);
}