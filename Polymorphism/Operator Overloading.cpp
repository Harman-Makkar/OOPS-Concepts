#include<bits/stdc++.h>
using namespace std;

class A{
    public:

    int a;
    int b;

    public:
    int result(){
        return a+b;
    }

    void operator+(A &obj){
        int value1=this->a;
        int value2=obj.a;

        cout<<"Output="<<value2*value1<<endl;
    }
};

int main(){
    A obj1,obj2;

    obj1.a=5;
    obj2.a=6;

    obj1+obj2;

    return 0;

}