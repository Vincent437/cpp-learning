#include<iostream>
using namespace std;

template<class nametype, class agetype = int>
class person{
    public:

    nametype name;
    agetype age;

    person(nametype name, agetype age){
        this->age=age;
        this->name=name;
    }

    void show_person(){
        cout<< name<< endl;
        cout<< age<< endl;
    }
};

//类没有自动类型推导
//类在模板参数列表可以有默认参数

int main(){
    //person p("fsldjf",11);
    person<string, int> p("fsldjf",11);
    p.show_person();


    person<string> p2("ajdfl",22);
    p2.show_person();

    return 0;
}