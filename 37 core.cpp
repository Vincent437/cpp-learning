/*
四个内存分区

运行前的两个区：
代码区（二进制）（共享-》频繁执行一个程序，只需要在内存中有一份代码、
                只读-》避免程序意外修改其指令）
全局区（存放全局变量和静态变量、包含常量区）（操作系统自动释放内存）

运行后的两个区：
栈区数据注意事项：由编译器管理；函数不要返回局部变量的地址；存放局部变量和型参；

堆区：由程序员释放，通过new在堆区开辟内存


*/

#include<iostream>
using namespace std;

int g_a=10;
int g_b=10;
const int c_g_a=10;

int * func(){
    int a = 10;
    return &a;//函数执行完后会释放，返回没意义
}


int main() {

    //函数体内局部变量
    int a =10;
    int b =10;
    cout<< (long)&a<< endl;
    cout<< (long)&b<< endl;
    cout<< (long)&g_a<< endl;
    cout<< (long)&g_b<< endl;

    //静态变量
    static int s_a=10;
    static int s_b=10;
    cout<< (long)&s_a<< endl;
    cout<< (long)&s_b<< endl;

    //常量：字符串常量、const修饰的变量
    cout<<(long)&"z"<<endl;
    //const变量：全局、局部
    const int c_l_a =10;
    const int c_l_b =10;

    cout<< (long)&c_g_a<<endl;
    cout<< (long)&c_l_a<<endl;
    cout<< (long)&c_l_b<<endl;

    int *p =func();
    cout<< *p <<endl;//第一次编译器会保留
    cout<< *p <<endl;//第二次编译器不会保留
    return 0;
}