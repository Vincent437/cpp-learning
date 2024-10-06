#include<iostream>
using namespace std;

template<class T1, class T2>

class person{
    public:
    T1 name;
    T2 age;

    person(T1 name, T2 age){
        this->age=age;
        this->name=name;
    }

    void show(){
        cout<< name<< endl;
        cout<< age<< endl;
    }
};
//1.
void print1(person <string, int>&p){
    p.show();
}

void test1(){
    person <string, int> p("sdfsk",18);
    print1(p);
}

//2.
template<class T1, class T2>
void print2(person<T1, T2>&p){
    p.show();
    cout<< typeid(T2).name()<< endl;
}

void test2(){
    person <string, int> p("sdshfksh",22);
    print2(p);
}

//3.
template<class T>
void print3(T &p){
    p.show();
    cout<< typeid(T).name()<< endl;
}

void test3(){
    person <string, int> p("sdshfksh",22);
    print3(p);    
}

int main(){
    test3();
    return 0;
}