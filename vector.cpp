#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vect1={1,2,3,4};
    cout<<"size of the vector:"<<vect1.size()<<endl;
    cout<<"Capacity of the vector:"<<vect1.capacity()<<endl;;
    vect1.push_back(5);
    cout<<"size of the vector:"<<vect1.size()<<endl;
    cout<<"Capacity of the vector:"<<vect1.capacity()<<endl;
return 0;
}