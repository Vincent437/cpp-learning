#include<iostream>
using namespace std;

template<class name_type, class age_type>
class person{
    public:
    name_type name;
    age_type age;

    person(name_type name, age_type age){
        this->name=name;
        this->age=age;
    }

    void show_person(){
        cout<< name<< endl;
        cout<< age<<endl;
    }
};

void test1(){
    person <string, int> p1("xfasjdfh",20);
    p1.show_person();
}

int main(){
    test1();
    return 0;
}