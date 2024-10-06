#include<iostream>
using namespace std;

class person1{
    public:
    void show1(){
        cout<< "show1"<< endl;
    }
};

class person2{
    public:
    void show2(){
        cout<< "show2"<< endl;
    }
};

template<class T>
class person{
    public:
    T obj;
    void show(){
        cout<< "show temp"<< endl;
    }
    void func1(){
        obj.show1();
    }
    void func2(){
        obj.show2();
    }

};

//类模板中的成员函数只有调用时才创建
void test1(){
    person <person1> m;
    m.func1();
    //m.func2();
}

int main(){
    test1();
    return 0;
}