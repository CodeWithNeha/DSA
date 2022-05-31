#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v[1] = 300;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v.size()<<endl;
    cout<<v.at(2)<<endl;
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}