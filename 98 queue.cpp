#include<iostream>
using namespace std;
#include<queue>

class person{
    public:
    string name;
    int age;
    person(string name, int age){
        this->age=age;
        this->name=name;
    }
};

int main(){
    queue<person> q;

    person p1("sdfs",213);

    q.push(p1);

    while(!q.empty()){
        cout<< q.front().age<< endl;
        cout<< q.back().name<< endl;
        q.pop();
    }

    cout<< q.size()<< endl;

    return 0;
}