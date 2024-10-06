#include<iostream>
using namespace std;

void print(int &a){
    cout<< a<< endl;
}

int & l_q(){
    int a=10;
    return a;
}

int & l_q2(){
    static int a=10;
    return a;
}
//引用实际是指针常量
int main() {
    int a =10;
    int * p= &a;
    cout<< &a<< endl;
    cout<< p<< endl;
    cout<< a<< endl;
    cout<< *p<<endl;
    int &b= a;
    cout<< &b<< endl;
    cout<< b<< endl;

    //print(a);

    //int &b; 未初始化，错误
    //引用无法更改成 c

    //不要返回局部变量的引用
    int & ref = l_q();
    cout << ref <<endl;
    cout << ref <<endl;
    //返回值是引用的函数的调用可以作为左值
    int & ref2 = l_q2();
    cout << ref2 <<endl;

    l_q2()=100;
    cout << ref2 <<endl;

    return 0;
}