#include<iostream>
#include<cstring>
using namespace std;
bool checkAB(char input[]) {
	if(strlen(input)==0){
        return true;
    }
 	if(input[0]=='a'){
        if(strlen(input+1)>1&&input[1]=='b'&&input[2]=='b'){
            return checkAB(input+3);
        }
        else{
            checkAB(input+1);
        }
    }
    else
    	return false;
}
int main(){
    char arr[100];
    cin>>arr;
    cout<<checkAB(arr)<<endl;
}