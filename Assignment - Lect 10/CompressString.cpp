#include <iostream>
#include <string>
using namespace std;
int main(){
    // char str[300];
    //   char strCopy[1089];
    // int pre = 0,count = 0, i =0,index = 0;
    // cin>>str;
  
    // for(i = 0;str[i]!='\0';i++){
    //     if(str[pre]==str[i]){
    //         count++;
    //     }
    //     else if(str[i]!=str[pre]){
            
    //         strCopy[index++] = str[pre];
    //         pre = i;
    //       if(count!=1){
               
    //           strCopy[index++] = count+48;
    //       }
    //         count = 1;
    //     }
    // }
    // if(count == 1){
    //             strCopy[index]= str[pre];
    //             pre = i+1;
    //     		index++;
    //     }
    //     else{
    //                strCopy[index] =str[pre];
    //             index++;
    //             strCopy[index] = count+48;
    //             pre = i+1;
    //             index++;
    //     }
    // cout<<strCopy;

    char input[500],output[500];
    cin.getline(input,500);
		int min = INT_MAX;
    	int len = strlen(input);
    	int pre = 0;
    	for(int i = 0;i<len;i++){
            while(input[i]!=' '){
                i++;
                if(i>=len){
                    break;
                }
            }
            int lenMin = i-pre;
            int preC = pre;
            cout<<input[pre]<<lenMin<<i<<endl;
            pre = i+1;
            if(lenMin<min){
                int c = 0;
                while(c<lenMin){
                    output[c] = input[preC];
                    preC++;
                    c++;
                }
                output[c]='\0';
                min = lenMin;
            }
        }
        cout<<output;
}