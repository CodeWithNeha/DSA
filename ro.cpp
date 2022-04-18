#include <iostream>
using namespace std;
void reverse(int arr[],int low,int high){
	while(low<high){
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
		low++;
		high--;
	}
}
int main() {
    int arr[10000];
	int n;
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
	reverse(arr,0,x-1);
	reverse(arr,x,n-1);
	reverse(arr,0,n-1);
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}

    return 0;
}