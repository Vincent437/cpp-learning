#include<iostream>
using namespace std;

class person{
    public:
    int* age;

    person& operator=(person &p){
        if(age!=NULL){
            delete age;
            age=NULL;
        }
        age=new int(*p.age);
        return *this;
    }
    person(int a){
        age= new int(a);
    }

    ~person(){
        if(age!=NULL){
            delete age;
            age=NULL;
        }
    }
};

int main() {
    person p1(18);
    cout<< *p1.age<<endl;

    person p2(20);
    cout<< *p2.age<< endl;

    person p3(30);
    p3=p2=p1;
    cout<< *p3.age<< endl;
    return 0;
}