#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int rowMax = INT_MIN, colMax = INT_MIN,rowIn = 0,colIn = 0;
      for(int i = 0;i<n;i++){
          int sum = 0;
        for(int j = 0;j<m;j++){
            sum+=arr[j][i];
        }
        if(colMax<sum){
            colMax = sum;
            colIn = i;
        }
    }
         for(int i = 0;i<m;i++){
          int sum = 0;
        for(int j = 0;j<n;j++){
            sum+=arr[i][j];
        }
        if(rowMax<sum){
            rowMax = sum;
            rowIn = i;
        }
        }
        if(rowMax>colMax){
            cout<<"row"<<rowIn<<" "<<rowMax;
        }
        else{
            cout<<"column "<<colIn<<" "<<colMax;
        }

}