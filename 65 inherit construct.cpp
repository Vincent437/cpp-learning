#include<iostream>
using namespace std;

class Base{
    public:
    int a=20;
    static int s;
    void func(){
        cout<< "Basefunc"<< endl;
    }
    static void func2(){
        cout<< "static Basefunc"<< endl;
    }
    Base(){
        cout<< "Baseconstruct"<< endl;
    }
    ~Base(){
        cout<< "Basedestroy"<< endl;
    }
};
int Base::s=20;

class son: public Base{
    public:
    int a=10;
    static int s;
    static void func2(){
        cout<< "static sonfunc"<< endl;
    }
    void func(){
        cout<< "sonfunc"<< endl;
    }
    son(){
        cout<< "construct"<< endl;
    }
    ~son(){
        cout<< "destroy"<< endl;
    }
};
int son:: s=10;

void test1(){
    son s;
    cout<< s.a<< endl;
    cout<< s.Base::a<< endl;
    s.Base::func();
    cout<< s.s<< endl;
    cout<< s.Base::s<< endl;
    cout<< Base().s<< endl;
    cout<< Base::s<< endl;
    cout<< son::Base::s<< endl;
}


void test2(){
    son s;
    s.Base::func2();
    son::Base::func2();
}

int main() {
    test2();
    return 0;
}