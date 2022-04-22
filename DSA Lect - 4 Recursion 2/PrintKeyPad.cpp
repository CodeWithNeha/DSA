#include<iostream>
using namespace std;
string getCode(int num){
    switch(num){
        case 2:
        return "abc";
        case 3:
        return "def";
        case 4:
        return "ghi";
        case 5:
        return "jkl";
        case 6:
        return "mno";
        case 7:
        return "pqrs";
        case 8:
        return "tuv";
        case 9:
        return "wxyz";
    }
    return "";
}
void keypad(int num, string output){
  if(num==0){
      cout<<output<<endl;
      return;
  }
  int n = num%10;
  string getC = getCode(n);
  for(int i = 0;i<getC.size();i++){
      keypad(num/10,getC[i]+output);
  }
}

int main(){
    int num;
    cin>>num;
    keypad(num,"");
}