#include<iostream>
#include<cstring>
using namespace std;
bool isanagram(string str1,string str2){
    if(str1.length()!=str2.length()){
        cout<<"It is not an Anagram ";
        return false;
    }
    int count[26]={0};
    for(int i=0;i<str1.length();i++){
        int idx=str1[i]-'a';
        count[idx]++;
    }
    for(int i=0;i<str2.length();i++){
        int idx=str2[i]-'a';
        count[idx];
        if(count [idx]<0){
           cout<< "it is Invalid";
           return false;
        }
    }
    cout<<"valid anagram";
    return true;
}
int main(){
    string str1="krishna";
    string str2="kanha";
    isanagram(str1,str2);
    return 0;
}
