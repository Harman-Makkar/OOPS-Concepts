#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;
    int wt;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog:public Animal{

};

int main(){
    Dog obj;
    obj.speak();
    // cout<<obj.age<<endl;
    return 0;
}