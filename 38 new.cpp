#include<iostream>
using namespace std;

int * fun(){
    int * a = new int(10);
    return a;
}

int * func(){
    int * arr = new int[3];
    for(int i=0; i<3; i++){
        arr[i]=i+10;
    }
    return arr;
}

int main() {
    int * p =fun();
    cout<< *p <<endl;
    cout<< *p <<endl;

    delete p;

    cout<< *p<< endl;


    int *p2 = func();
    for (int i=0; i<3; i++){
        cout<< p2[i]<< endl;
    }
    delete [] p2;
    cout << *p2<< endl;
    return 0;
} 