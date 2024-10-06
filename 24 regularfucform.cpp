#include<iostream>
using namespace std;

// declare
void test1();
// four forms of regular functions
void test1(){
    cout << "test1" << endl;
}

//2
void test2(int a){
    cout << "test2 a: " << a << endl;
}

//3
int test3(){
    return 100;
}

//4
int test4(int a){
    return 100*a;
}

int main() {
    test1();
    test2(30);
    int num = test3();
    cout << num << endl;
    int num2 = test4(10);
    cout << num2 << endl;
    return 0;
}