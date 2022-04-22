#include<iostream>
using namespace std;
void shift(char input[],int j,int end){
    for(;end>=j;end--){
        input[end+1] = input[end];
    }
}
void pair1(char input[],char pre,int i){
    if(i<0){
        return;
    }
    if(pre==input[i]&&input[i]==input[i+1]){
        pre = input[i];
        shift(input,i,strlen(input));
        input[i+1] = '*';
        
    }
    else if(pre!=input[i]){
        pre = input[i];
    }
    cout<<i<<pre<<endl;
    pair1(input,pre,i-1);
}
void pairStar(char input[]) {
    pair1(input,input[strlen(input)-1],strlen(input)-2);
}
int main(){
    char input[100];
    cin>>input;
    pairStar(input);
    cout<<input;
}