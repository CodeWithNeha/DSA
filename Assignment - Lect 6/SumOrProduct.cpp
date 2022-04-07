#include<iostream>
using namespace std;
int main(){
    int n,c;
    cin>>n>>c;
    if(c==1)
    {
        int sum = 0;
        for(int i = 1;i<=n;i++){
            sum +=i;
        }
        cout<<sum<<endl;
    }
    else if(c==2){
        int prod = 1;
        for(int i=1;i<=n;i++){
            prod *=i;
        }
        cout<<prod<<endl;
    }
    else{
        cout<<-1;
    }
}