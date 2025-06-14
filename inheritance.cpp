#include<iostream>
using namespace std;

class Animal{
public:
    void eat(){
        cout<<"Eats"<<endl;
    }
    void breathe(){
        cout<<"breath"<<endl;
    }
};

class Mammal : public Animal{
public:
    string bloodType;
    Mammal(){
      bloodType="warm";  
    }

};

class Dog : public Mammal{
    public:
        void tailwag(){
            cout<<"A Dog wags its tail"<<endl;
        }
};

int main(){
    Dog d1;
    d1.eat();
    d1.breathe();
    d1.tailwag();
    cout<<d1.bloodType<<endl;

    return 0;

}