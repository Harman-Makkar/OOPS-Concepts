#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;
    int wt;

    public:
    void bark(){
        cout<<"Barking"<<endl;
    }

};

class Human{
    public:
    string color;

    public:
    void speak(){
        cout<<"Speaking"<<endl;

    }
};

class Hybrid:public Animal,public Human{

};

int main(){
    Hybrid obj;

    obj.bark();
    obj.speak();

    // cout<<obj.color<<"Yellow"<<endl;

}