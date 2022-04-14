#include<iostream>
using namespace std;
int main(){
    char a[100];
    cin>>a;
    char b[100];
    cin>>b;
    if(strlen(a)!=strlen(b)){
        cout<<false;
        return 0;
    }
    // for(int i = 0;i<strlen(a);i++){
    //     int flag = 0;
    //     for(int j = 0;j<strlen(b);j++){
    //         if(a[i]==b[j]){
    //             b[j] = '0';
    //             flag =1;
    //             break;
    //         }
    //     }
    //     if(flag==0){
    //         cout<<false;
    //         return 0;
    //     }
    // }
    // cout<<true;
    int freq[256];
    for(int i = 0;i<strlen(a);i++){
        freq[a[i]-'a']++;
    }
    for(int i = 0;i<strlen(b);i++){
        freq[b[i]-'a']--;
        if(freq[b[i]-'a']<0){
            cout<<false;
            return 0; 
        }
    }
    cout<<true;
}