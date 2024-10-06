#include<iostream>
using namespace std;
#include<string.h>

class printer{
    public:
    void operator()(string test){
        cout<< test<< endl;
    }
};

class adder{
    public:
    int operator()(int a, int b){
        return a+b;
    }
};

void test1(){
    printer p;
    p("hello world");//fake function
}

void test2(){
    adder add;
    cout<< add(120,300)<< endl;

    cout<< adder()(100,300)<<endl;//匿名对象
}

int main() {
    test1();
    test2();
    return 0;
}