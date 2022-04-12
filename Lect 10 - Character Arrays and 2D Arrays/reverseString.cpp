#include<iostream>
using namespace std;
int main(){
    char a[100];
    cin.getline(a,10);
    int low = 0,high = 8;
    while(low<=high){
        char temp = a[low];
        a[low] = a[high];
        a[high] = temp;
        low++;
        high--;
    }
    cout<<a;
}