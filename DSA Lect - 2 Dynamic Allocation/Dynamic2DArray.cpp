#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int **arr = int *[m];
    for(int i = 0;i<m;i++){
        arr[0] = new int[n];
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0;i<m;i++){
        delete []arr[i];
    }
    delete []arr;
}