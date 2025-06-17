#include<iostream>
using namespace std;
class A{
    private:
    string secreate="Secreate Data: Krishna Is The Only Our Best Friend ";
    friend class B;
};
class B{
    public:
    void showsecreate(A &obj){
        cout<<obj.secreate<<endl;
    }
};
int main(){
    A a1;
    B b1;
  b1.showsecreate(a1);
    return 0;
}