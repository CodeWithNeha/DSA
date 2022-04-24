#include<iostream>
using namespace std;
int pairSum(int *arr, int n, int num)
{
	int count1 = 0;
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]+arr[j]==num){
                count1++;
            }
        }
    }
    return count1;
}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<pairSum(arr,n,x);
}