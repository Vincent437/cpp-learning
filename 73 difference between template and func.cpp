#include<iostream>
using namespace std;

int add(int a , int b){
    return a+b;
}

template<typename T>
T add2(T a, T b){
    return a+b;
}

int main(){
    int a =10;
    int b=20;
    char c= 'c';
    cout<< "add:"<< add(a,c)<< endl;//(int)c
    cout<< add2(a,b)<< endl;
    cout<< add2<int>(a,c)<< endl;
    return 0;
}