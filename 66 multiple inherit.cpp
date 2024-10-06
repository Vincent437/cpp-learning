#include<iostream>
using namespace std;

class Base{
    public:
    int a=20;
};

class Base2{
    public:
    int a=25;
};

class son: public Base, public Base2{
    public:
    int b=10;
};

void test1(){
    son s;
    cout<<s.Base::a<< endl;
    cout<< s.Base2::a<< endl;
}


void test2(){

}

int main() {
    test1();
    return 0;
}