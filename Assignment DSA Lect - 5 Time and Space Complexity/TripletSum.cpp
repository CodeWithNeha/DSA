#include<iostream>
using namespace std;
// int tripletSum(int *arr, int n, int num)
// {
// 	int count1 = 0;
//     for(int i = 0;i<n-2;i++){
//         for(int j = i+1;j<n-1;j++){
//             for(int k = j+1;k<n;k++){
//                 if(arr[i]+arr[j]+arr[k]==num)
//                     count1++;
//             }
//         }
//     }
//     return count1;
// }
int tripletSum(int *arr, int n, int num)
{
	sort(arr,arr+n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int count1 = 0;
    for(int i = 0;i<n;i++){
        int target = num-arr[i];
        int low = i+1,high = n-1;
        while(low<high){
            if(arr[low]+arr[high]<target){
                low++;
            }
            else if(arr[low]+arr[high]>target){
                high--;
            }
            else{
                count1++;
                high--;
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
    cout<<tripletSum(arr,n,x);
}