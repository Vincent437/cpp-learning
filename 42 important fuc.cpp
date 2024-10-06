#include<iostream>
using namespace std;

//函数重载：同一个作用域!!!；名称相同；参数类型、个数、顺序不同
//返回值不满足重载条件

void func(){
    cout<< "func1"<< endl;
}

void func(int a){
    cout<< "func2"<< endl;
}

void func(double a){
    cout<< "func3"<< endl;
}

void func(int b, double a){
    cout<< "func4"<< endl;
}

//引用作为重载条件

void fun(int &a){ //int &a=10;不合法
    cout<< "&a"<< endl;
}

void fun(const int &a){
    cout<< "const &a"<< endl;
}

//函数重载碰到默认参数

void fun2(int a,int b=10){
    cout<< "fun2"<< endl;
}

void fun2(int a){
    cout<< "fun2"<< endl;
}

int main() {
    func();
    func(10);
    func(3.1);
    func(10,3.1);
    int a =10;
    fun(a);//进入不加const的函数
    fun(100);
    //fun2(a);
    return 0;
}