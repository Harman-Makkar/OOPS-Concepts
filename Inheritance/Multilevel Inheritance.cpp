#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;
    int wt;

    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};

class Dog:public Animal{

};

class Lebra:public Animal{

};

int main(){
    Lebra obj;
    obj.speak();
    // cout<<obj.wt<<endl;
    return 0;
}