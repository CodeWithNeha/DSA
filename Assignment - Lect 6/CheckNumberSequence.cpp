#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int i = 0;
    while(i<n){
        cin>>a[i];
        i++;
    }
    bool flag = false;
    if(a[0]<a[1]){
        int j =1;
        while(j<n-1){
            if(a[j]>a[j+1]){
                while(j<n-1){
                    if(a[j+1]<=a[j+2]){
                        flag = true;
                        cout<<"false";
                        break;
                    }
                    j = j+1;
                }
            }
            j = j+1;
        }
        if(!flag){
            cout<<"true";
        }
    }
    else if(a[0]>a[1]){
        int j =1;
        while(j<n-1){
            if(a[j]<a[j+1]){
                while(j<n-1){
                    if(a[j+1]>=a[j+2]){
                        flag = true;
                        cout<<"false";
                        break;
                    }
                    j = j+1;
                }
            }
            j = j+1;
        }
        if(!flag){
            cout<<"true";
        }
    }
}