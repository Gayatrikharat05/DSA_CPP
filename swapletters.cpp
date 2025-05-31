#include<iostream>
using namespace std;
bool isreverse(string str1,string str2,int n){
    if(str1.length()!=str2.length()){
        return false;
    }
for(int i=0;i<n;i++){
    if(str1[i]!=str2[n-i-1]){
        return false;
    }
}
return true;

}
int main(){
    string str1="abcd";
    string str2="dcba";
     cout<< isreverse(str1,str2,str1.length());
      return 0;
}
