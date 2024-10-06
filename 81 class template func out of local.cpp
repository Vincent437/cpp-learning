#include<iostream>
using namespace std;

template<class T1, class T2>

class person{
    public:
    T1 name;
    T2 age;

    person(T1 name, T2 age);/*{
        this->name=name;
        this->age=age;
    }*/
    void show();/*{
        cout<< name<<endl;
        cout<< age << endl;
    }*/
};

template<class T1, class T2>
person<T1,T2>:: person(T1 name, T2 age){
    this->name=name;
    this->age=age;
}

template<class T1, class T2>
void person<T1,T2>:: show(){
    cout<< name<<endl;
    cout<< age << endl;
}

int main(){
    person<string, int> p("sf",20);
    p.show();

    return 0;
}