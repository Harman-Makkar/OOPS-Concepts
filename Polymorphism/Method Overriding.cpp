#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog:public Human{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main(){
    Dog obj;
    obj.speak();
}

//Output: Barking