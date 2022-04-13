#include<iostream>
#include<cstring>
using namespace std;
int main(){
  char a[100];
    cin>>a;
   
    int start = 0;
    while(a[start]!='\0'){
         int i = start;
        while(a[i]!='\0'){
        for(int j = start;j<=i;j++){
            cout<<a[j];
        }
        i++;
         cout<<endl;
    }
    start++;
    }
    

}