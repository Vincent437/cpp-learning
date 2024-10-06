#include<iostream>
using namespace std;

class person{
    public:
    int a;
    person(){

    } 
    person(int a1):a(a1){

    }
    /*person operator+(person &p){
        person temp;
        temp.a=this->a+p.a;
        return temp;
    }*/
};

person operator+(person &p1,person &p2){
    person temp;
    temp.a=p1.a+p2.a;
    return temp;
}

person operator+(person &p1,int b){
    person temp;
    temp.a=p1.a+b;
    return temp;
}

int main() {
    person p1(10);
    person p2(10);
    person p3=p1 + p2;
    cout<<p3.a<<endl;

    return 0;
}