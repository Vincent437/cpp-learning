#include<iostream>
using namespace std;

class Base{
    public:
    int a;
    protected:
    int b;
    private:
    int c;
};

class son: public Base{
    public:
    void func(){
        a=10;
        b=20;
        //c=30;
    }
};

void test1(){
    son s;
    s.a=100;
    //s.b=30;
}

class son2: protected Base{
    public:
    void func(){
        a=10;
        b=20;
        //c=30;
    }
};

void test2(){
    son2 s;
    //s.a=100;
    //s.b=30;
}

class son3: private Base{
    public:
    void func(){
        a=10;
        b=20;
        //c=30;
    }
};

void test3(){
    son3 s;
    //s.a=100;
    //s.b=30;
}

class grandson: public son3{
    public:
    void func(){
        //a=1000;
    }
};

int main() {
    son s;
    //非静态都会被继承
    cout<< sizeof(s)<< endl;
    return 0;
}