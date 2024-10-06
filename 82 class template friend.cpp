#include<iostream>
using namespace std;

template<class T1, class T2>
class person;

template<class T1, class T2>
void print2(person<T1,T2> p){
    cout<< p.name<< endl<< p.age;
}

template <class T1, class T2>
class person{

    friend void print(person<T1,T2> p){
        cout<< p.name<< endl<< p.age;
    }

    friend void print2<>(person<T1,T2> p);

    public:
    person(T1 name, T2 age){
        this->name=name;
        this->age =age;
    }

    private:
    string name;
    int age;
};



void test1(){
    person<string, int> p("tom",54);
    print(p);
}

void test2(){
    person<string, int> p("tom",54);
    print2(p);
}

int main(){
    test2();
    return 0;
}