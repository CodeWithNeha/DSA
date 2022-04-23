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
int keypad(int num, string output[]){
  if(num==0){
      output[0] = "";
      return 1;
  }
  int smallSize = keypad(num/10,output);
    string str = getCode(num%10);
    int ans = smallSize*str.size();
    string temp[ans];
    int k = 0;
  for(int i = 0;i<smallSize;i++){
      for(int j = 0;j<str.size();j++){
          temp[k] = output[i]+str[j];
          k++;
      }
  }
  for(int i = 0;i<ans;i++){
      output[i] = temp[i];
  }
  return smallSize*str.size();
}
int main(){
    int num;
    cin>>num;
    string* output = new string[1000];
    int count = keypad(num,output);
    cout<<count;
    for(int i = 0;i<count;i++){
        cout<<output[i]<<endl;
    }
}