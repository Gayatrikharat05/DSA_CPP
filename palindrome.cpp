#include<iostream>
#include<cstring>
using namespace std;

bool ispalindrome(char word[],int n){
    int st=0,end=n-1;
    while(st<=end){
    if(word[st++]!=word[end--]){
        cout<<"Not Valid Palindrome";
        return false;
    }
}
cout<<"Valid Palindrome";
return true;

}
int main(){
    char word[]="racecar";
    ispalindrome(word,strlen(word));
    
    return 0;
}