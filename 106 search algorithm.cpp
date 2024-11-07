#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>

//find
void F(){
    vector<int> v;
    for(int i = 0; i<10; i++){
        v.push_back(i);
    }

    vector<int>::iterator it= find(v.begin(),v.end(),7);
    if(it== v.end()){
        cout<<"no result"<< endl;
    }
    else{
        cout<< "find it"<< endl;
        cout<< *it<< endl;
    }
}

class person{
    public:
    person(string name, int age){
        this->age=age;
        this->name=name;
    }
    friend ostream& operator<<(ostream& os, const person& p){
    cout << "name:" << p.name << "  age:" << p.age << endl;
    return os;
};
    bool operator==(person p1){
        if(p1.age==this->age && p1.name== this->name){
            return true;
        }
        else{
            return false;
        }
    }

    string name;
    int age;
};



void F2(){
    vector<person> v;
    person p1("aaa",10);
    person p2("bbb",20);
    person p3("ccc",30);
    person p4("ddd",40);
    
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    vector<person>::iterator it= find(v.begin(),v.end(),p3);
    if(it== v.end()){
        cout<<"no result"<< endl;
    }
    else{
        cout<< "find it"<< endl;
        cout<< *it<< endl;
    }
}

int main(){
    F();
    F2();
    return 0;
}