#include<iostream>
#include<string>
using namespace std;
class User{
    int id;
    int password;
     public:
     string username;
     User(int id){
        this->id=id;
     }
       void setpassword(int password){
        this-> password=password;
     }
     int getpassword(){
        return password;
     }
};
int main(){
User user1(101);
user1.username="Gayatri";
user1.setpassword(1234);
cout<<"User Name: "<<user1.username<<endl;
cout<<"User Password: "<<user1.getpassword()<<endl;
    return 0;
}
