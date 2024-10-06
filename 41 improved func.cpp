#include<iostream>
using namespace std;

// default variable
// 一个默认实参后面所有值都得有默认值
int func(int a, int b= 10, int c= 20){
    return a+b+c;
}

//声明有默认参数，实现不能有默认参数；两个里面只能有一个有默认参数
int func2(int a=10, int b=20);

int func2(int a, int b){
    return a+b;
}

//占位函数

void func3(int a, int, int =10){
    cout<< "func3"<< endl;
}

int main() {
    cout<< func(10,30)<< endl;
    cout<< func2()<< endl;
    func3(10,20);

    return 0;
}