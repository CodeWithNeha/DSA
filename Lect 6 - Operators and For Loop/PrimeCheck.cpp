#include<iostream>
using namespace std;
int main(){
    bool div = false;
    int n;
    cin>>n;
    for(int i = 2;i<n;i++){
        if(n%2==0){
            cout<<"Not Prime";
            div = true;
            break;
        }
    }
    if(!div){
        cout<<"Prime";
    }

for(int i = 0; i < 2; i = i + 1) {
     for(int j = 0; j < 2; j = j + 1) {
          if (j == 1)
              break;
          cout << j << " ";
      }
 } 
}