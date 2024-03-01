#include<bits/stdc++.h>
using namespace std;

class Base{
public:
    // Pure virtual function declaration
    virtual void s()=0; 
};

class Derived: public Base{
public:
    // Implementation of the pure virtual function
    void s(){
        cout<<"Virtual Function in Derived_class";
    }
};

int main(){
    Base *b; // Declaring a pointer to Base class
    Derived d_obj; // Creating an object of Derived class
    b = &d_obj; // Assigning the address of the Derived object to the Base pointer
    b->s(); // Calling the virtual function using the Base pointer
}

//Output: Virtual Function in Derived_class
