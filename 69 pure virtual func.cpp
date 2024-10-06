#include<iostream>
using namespace std;

class Base{
    public:
    virtual void func()=0;
};

class son: public Base{
    public:
};

class sonson: public Base{
    public:
    void func(){

    }
};

int main() {
    //Base b;
    //son s;
    Base *b=new sonson;
    b->func();
    return 0;
}