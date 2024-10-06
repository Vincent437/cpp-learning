#include<iostream>
using namespace std;

class person{
    public:
    int a;
    mutable int b;
    person():a(10){

    }
    void func() const{
        //a=10;
        b=100;
    }
    void fun(){

    }
};

int main() {
    person p;
    p.func();
    const person p2;
    p2.b=20;
    //p2.fun();
    return 0;
}