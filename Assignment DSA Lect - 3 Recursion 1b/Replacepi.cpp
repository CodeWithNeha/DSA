#include<iostream>
using namespace std;
void shift(char input[],int j,int end){
    for(;end>=j;end--){
        input[end+2] = input[end];
    }
}
void replace(char input[],int i,int j){
    if(j<0){
        return;
    }
    if(j>0&&input[j]=='i'&&input[j-1]=='p'){
        if(j!=strlen(input-1))
            shift(input,j+1,strlen(input));
        input[j-1] = '3';
        input[j] = '.';
        input[j+1] = '1';
        input[j+2] = '4';
    }
    replace(input,i,j-1);
}
void replacePi(char input[]) {
	replace(input,0,(strlen(input)-1));
}
int main(){
    char arr[100];
    cin>>arr;
    replacePi(arr);
    cout<<arr<<endl;
}