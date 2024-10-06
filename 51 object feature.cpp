#include<iostream>
using namespace std;

class person{
    int a;//属于对象
    static int b;//不在对象上
    void func(){//不在对象上
    
    }
    static void func2(){//不在对象上

    }
};

int person::b =10;

void test1(){
    person p;
    cout<< sizeof(p)<<endl;// empty one is 1
}

void test2(){
    person p;
    cout<< sizeof(p)<<endl;// with a int, its 4
}

int main() {
    test2();
    return 0;
}