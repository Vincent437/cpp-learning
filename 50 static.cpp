#include<iostream>
using namespace std;

class person{
    public:
    static int a;
    int b=10;
    int* c=&b;
    static void func(){
        a=30;
        //b=20;
        cout<<"static"<< endl;
    }

    private:
    static int d;
    void func2(){

    }
};

int person::a=10;
int person::d=20;

void test1(){
    person p;
    *p.c=20;
    cout<< p.b<< endl;
    person p2;
    p2.a=20;
    cout<< p.a<< endl;
    cout<< person::a<< endl;
    p.func();
    person::func();
    //cout<< person::d<< endl;
    //person::func2();
}

int main() {
    test1();
    return 0;
}