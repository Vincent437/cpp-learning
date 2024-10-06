#include<iostream>
using namespace std;

class person{
    public:
    string name;
    int age;
    person(string n, int a):name(n),age(a){
        
    }
    bool operator==(person &p){
        if (this->age==p.age&&this->name==p.name){
            return true;
        }
        else{
            return false;
        }
    }
    bool operator!=(person &p){
        if (this->age!=p.age||this->name!=p.name){
            return true;
        }
        else{
            return false;
        }
    }
};

void test1(){
    person p1("tom",18);
    person p2("tom",18);

    if (p1==p2){
        cout<< "equal"<<endl;
    }
    if (p1!=p2){
        cout<< "not equal"<<endl;
    }
}

int main() {
    test1();
    return 0;
}