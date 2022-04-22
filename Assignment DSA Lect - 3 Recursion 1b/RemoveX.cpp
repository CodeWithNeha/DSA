#include<iostream>
using namespace std;

void remove(char input[],int pre,int i,int j){
    if(i>j){
        return;
    }
    if(input[i]!='x'){
        input[pre]= input[i];
        pre++;
    }
    remove(input,pre,i+1,j);
}
void removeX(char input[]) {
    remove(input,0,0,strlen(input));

}
int main(){
    char input[100];
    cin>>input;
    // int pre = 0;
    // for(int i = 0 ;i<strlen(input);i++){
    //     if(input[i]!='x'){
    //         input[pre]= input[i];
    //         pre++;
    //     }
    // }
    // input[pre] = '\0';
    removeX(input);
    cout<<input<<endl;
}