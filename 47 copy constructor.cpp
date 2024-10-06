#include<iostream>
using namespace std;

class person{
    public:
    /*person(){
        cout<< "default"<< endl;
    }*/
    person(int a){
        age=a;
        cout<< "argument"<< endl;
    }
    /*person(const person &p){
        age=p.age;
        cout<< "copy" <<endl;
    }*/
    ~person(){
        cout<< "destroier"<< endl;
    }
    int age;
};

/*void test1(){
    person p1;
    p1.age=20;
    person p2(p1);
    cout<< p2.age<< endl;

}

void dowork(person p){

}

void test2(){
    person p1;
    dowork(p1);
}

person dowork2(){
    person p1;
    cout<< (long*)&p1<<endl;
    return p1;
}

void test3(){
    person p= dowork2();
}

void test4(){
    person p;
    p.age=18;

    person p2(p);
    cout<< p2.age<< endl;
}*/

void test5(){
    person p(18);
    person p2(p);
}

int main() {
    //test1();
    //test2();
    test5();
    return 0;
}