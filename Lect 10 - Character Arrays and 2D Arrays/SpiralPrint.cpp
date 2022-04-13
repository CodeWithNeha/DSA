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
    int startRow = 0,startCol = 0,endRow = m-1,endCol = n-1;
    int total = m*n;
    int count = 0;
    while(count<total){
        for(int col = startCol;col<=endCol;col++){
            cout<<arr[startRow][col]<<" ";
            count++;
        }
        if(count>=total){
            break;
        }
        startRow++;
        for(int row = startRow;row<=endRow;row++){
            cout<<arr[row][endCol]<<" ";
            count++;
        }
           if(count>=total){
            break;
        }
        endCol--;
        for(int col = endCol;col>=0;col--){
            cout<<arr[endRow][col]<<" ";
            count++;
        }
           if(count>=total){
            break;
        }
        endRow--;
        for(int row = endRow;row>=0;row--){
            cout<<arr[row][startCol];
            count++;
        }
           if(count>=total){
            break;
        }
        startCol++;
    }
}