#include<bits/stdc++.h>
using namespace std;

class Base{
public:
    virtual void print(){
        cout<<"Base Function"<<endl;
    }
};

class Derived : public Base{
public:
    void print(){
        cout<<"Derived Function"<<endl;
    }
};

int main(){
    Derived derived1; // Creating an object of type Derived
    Base* base1= &derived1; // Pointer of Base type pointing to derived1
    base1->print(); // Calling member function of Derived class
    return 0;
}

// Output: Derived Function
