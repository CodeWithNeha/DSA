#include<iostream>
using namespace std;
int stringNum(char input[],int i ,int j)
{
    if(j<0){
        return 0;
    }
    cout<<(input[j]-48)<<endl;
    return (input[j]-48) + stringNum(input,i+1,j-1)*10;
}
int stringToNumber(char input[]) {
    return stringNum(input,0,(strlen(input)-1));
}
int main(){
    char str[100];
    cin>>str;
    cout<<stringToNumber(str)<<endl;
}