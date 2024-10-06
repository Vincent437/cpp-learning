#include<iostream>
using namespace std;

class person{
    public:
    person(){
        cout<< "construction"<< endl;
    }
    person(int b){
        age=b;
        cout<< "construction"<< endl;
    }
    person(const person &p){
        age=p.age;
        cout<< "construction"<< endl;
    }
    ~person(){
        cout<< "destroy"<< endl;
    }

    void test(person p){
        age=p.age;
    }

    int age;
};

void test(){
    person p;
    //person p(); declaration
    person p2(10);
    person p3(p2);
    p2.age=20;
    cout<< p3.age<< endl;

    person p4 = person(10);
    person p5 = person(p2);

    person(25);//下一行系统自动回收
    //person(p2); error: redefinition of 'p2'

    person p6 =10;//person p6 = person(10);
    p.test(p2);
    cout<< p.age<< endl;

}

int main() {
    test();

    return 0;
}