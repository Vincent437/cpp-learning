#include<iostream>
using namespace std;

//func prior
//empty template arguments list
//template reload
//template prior if suits best

void print(int a , int b){
    cout<< "regular function"<< endl;
}

template<class T>
void print(T a ,T b){
    cout<< "template"<< endl;
}

template<class T>
void print(T a ,T b, T c){
    cout<< "template2"<< endl;
}

void test1(){
    int a =10;
    int b=20;
    print(a,b);
    print<>(a,b);
    print(a,b,30);

    char c='c';
    char d='d';
    print(c,d);
}

int main(){
    test1();

    return 0;
}