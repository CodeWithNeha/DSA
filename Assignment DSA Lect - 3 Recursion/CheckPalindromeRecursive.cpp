
#include<iostream>
#include<cstring>
using namespace std;

bool help(char input[],int start,int end){
    if(start>end){
        return true;
    }
    if(input[start]!=input[end]){
        return false;
    }
    return help(input,start+1,end-1);
}
bool palin(char input[]){
   return help(input,0,strlen(input)-1);
}
int main(){
    char a[] = "aba";
    cout<<palin(a);
}