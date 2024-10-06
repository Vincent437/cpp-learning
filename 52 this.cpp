#include<iostream>
using namespace std;

class person{
    public:
    int a;

    person(int a){
        this->a=a;
    }
    person& personadd(person &p){
        this->a+=p.a;
        return *this;
    }
};



int main() {
    person p1(18);
    cout<< p1.a<<endl;
    person p2(18);
    person p3=p2.personadd(p1).personadd(p1).personadd(p1);
    cout<<p3.a<<endl;
    cout<<p2.a<<endl;
    return 0;
}