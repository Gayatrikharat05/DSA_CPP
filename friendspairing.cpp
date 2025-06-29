#include<iostream>
#include<string>
using namespace std;
int friendspairing(int n){
    if(n==1 || n==2){
        return n;
    } 
    return friendspairing(n-1)+(n-1)*friendspairing(n-2);
}
int main(){
    cout<<"there is the chance of pairs:"<<friendspairing(4)<<endl;
    return 0;
}
