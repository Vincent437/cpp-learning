#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void print(int val){
    cout<< val<< endl;
}

void test1(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(40);
    v.push_back(60);
    v.push_back(10);
    vector<int>::iterator itBegin= v.begin();
    vector<int>::iterator itEnd= v.end();

    while(itBegin!=itEnd){
        cout<< *itBegin<< endl;
        itBegin++;
    }

    for(vector<int>:: iterator it= v.begin(); it!=v.end(); it++){
        cout<< *it<< endl;
    }

    for_each(v.begin(),v.end(),print);

}

class person{
    public:
    person(string name, int age){
        this->age=age;
        this->name=name;
    }
    int age;
    string name;
};

void pri(person &p){
    cout<< p.age<< endl<< p.name<< endl;
}

void test2(){
    vector<person> v;
    person p1("sfds",10);
    person p2("sfds",10);
    person p3("sfds",10);
    person p4("sfds",10);
    person p5("sfds",10);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    for(vector<person>::iterator it=v.begin(); it!=v.end(); it++){
        cout<< "name "<< it->name<< " age "<< (*it).name<< endl;
    }

    for_each(v.begin(),v.end(),pri);
}

void test3(){
    vector<person*> v;
    person p1("sfds",10);
    person p2("sfds",10);
    person p3("sfds",10);
    person p4("sfds",10);
    person p5("sfds",10);

    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);

    for(vector<person*>::iterator it=v.begin(); it!=v.end(); it++){
        cout<< "name "<< (*(*it)).name<< " age "<< (*it)->name<< endl;
    }

}

int main(){
    test3();
    return 0;
}