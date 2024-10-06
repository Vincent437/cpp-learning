#include<iostream>
using namespace std;

int main() {
    //1
    int a=10;
    int b=20;
    const int * p = &a;
    //*p=20;
    p = &b;

    //2
    int * const p2 =&a;
    *p2=20;
    //p=&b;

    //3
    const int * const p3 =&a;
    
    return 0;
}