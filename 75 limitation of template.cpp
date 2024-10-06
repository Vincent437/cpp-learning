#include<iostream>
using namespace std;
#include<string>

class person{
    public:
    string name;
    int age;

    person(string name, int age){
        this->name=name;
        this->age=age;
    }
/*  bool operator==(person a){
        if (this->age==a.age){
            return true;
        }
    }
*/ 
};


template<class T>
bool equal(T a, T b){
    if (a==b){
        return true;
    }
    else{
        return false;
    }
}

template<> bool equal(person a, person b){
    if (a.age==b.age){
        return true;
    }
    else{
        return false;
    }
}

void test1(){
    int a =10;
    int b=20;
    cout<< equal(a,b)<< endl;
}

void test2(){
    person p1("t",10);
    person p2("t",10);

    cout<< equal(p1,p2)<<endl;
}

int main(){
    test2();

    return 0;
}