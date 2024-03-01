#include<bits/stdc++.h>
using namespace std;

class Rectangle{
private:
    int length;

public:
    Rectangle(){
        length=10;
    }

    friend int printLength(Rectangle); //friend function
};

int printLength(Rectangle b){
    b.length+=10; // Incrementing length by 10
    return b.length; // Returning modified length
}

int main(){
    Rectangle b;
    cout << "Length of Rectangle: "<< printLength(b)<<endl; // Printing modified length using friend function
    return 0;
}

//Ouput: Length of Rectangle:20
