#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void say(){
        cout<<"Hello Guys"<<endl;
    }

    void say(char name){
        cout<<"Hello"<<name<<endl;
    }
};

int main(){
    A obj;
    obj.say();
}

//Output: Hello Guys