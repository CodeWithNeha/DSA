#include<iostream>
using namespace std;
void reverse(char a[],int low,int high){
    while(low<=high){
        char temp = a[low];
        a[low] = a[high];
        a[high] = temp;
        low++;
        high--;
    }
}
int main(){
    char a[100];
    cin.getline(a,100);
    int i = 0,count = 0;
    while(a[i]!='\0'){
        count++;
        i++;
    }
    cout<<count;
    reverse(a,0,count-1);
    i=0;
    int pre = 0;
    while(a[i]!='\0'){
        if(a[i]==' ')
        {
            reverse(a,pre,i-1);
            pre = i+1;
        }
        i++;
    }
    reverse(a,pre,i-1);
    cout<<a;
}