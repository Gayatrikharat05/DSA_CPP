#include <iostream>
#include<cstring>
using namespace std;
void toupper(char word[],int n){
    for(int i=0;i<n;i++){
        char ch=word[i];
        if(ch>='a'&& ch<='z'){
            continue;
        }else{
           word[i]= ch-'A'+'a';
        }
    }
}
int main(){
char word[]="AppLe";
toupper(word,strlen(word));
cout<<"Your word was:"<<word; 

    return 0;
}

// Hello, I am new change 