#include<iostream>
using namespace std;
int count = 0;
void print(string input,string output,string out[]){
    if(input.length()==0){
        out[count] = output;
        count++;
        return;
    }
    for(int i = 0;i<input.length();i++){
      char ch = input[i];
      string left = input.substr(0,i);
      string right = input.substr(i+1);
      string rest = left+right;
      print(rest,output+ch,out);
    }
    
}
int returnPermutations(string input, string output[]){
    print(input,"",output);
   return count;
}
int main(){
    string *out = new string[1000];
    int count1 = returnPermutations("abc",out);
    for(int i = 0;i<count1;i++){
        cout<<out[i]<<endl;
    }
}