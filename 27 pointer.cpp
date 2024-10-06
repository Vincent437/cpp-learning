#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int *p;
    p=&a;
    cout << p << endl;
    cout << *p <<endl;

    int * p2 = NULL;
    //cout << *p2 << endl;

    int * p3 = (int *)0x1000;
    //cout << p3 << enl;
    return 0;
}