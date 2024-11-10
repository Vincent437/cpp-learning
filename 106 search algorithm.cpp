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

//find if

bool greater8(int a){
    return a>8;
}

class G{
    public:
    bool operator()(int a){
        return a>8;
    }
};

void FI(){
    vector<int> v;
    for(int i = 0; i<10; i++){
        v.push_back(i);
    }

    vector<int>::iterator it =find_if(v.begin(), v.end(),G());
    cout<< *it<< endl;
}

class Person{
    public:
    string name;
    int age;

    Person(string n, int a): age(a), name(n){}
    bool operator==(const Person& p){
        if(this->age=p.age&& this->name== p.name){
            return true;
        }
        else{
            return false;
        }
    }
};

class greater20{
    public:
    bool operator()(const Person& p){
        return p.age>20;
    }
};

void FI2(){
    vector<Person> v;
    Person p1("aaa",10);
    Person p2("bbb",20);
    Person p3("ccc",30);
    Person p4("ddd",40);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    
    vector<Person>::iterator it = find_if(v.begin(),v.end(),greater20());
    cout<< it->name<< endl;
}

//adjacent find

void AF(){
    vector<int> v;
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(4);
    v.push_back(0);
    v.push_back(0);
    v.push_back(6);
    v.push_back(7);
    v.push_back(0);
    
    vector<int>:: iterator it= adjacent_find(v.begin(),v.end());
    cout<< *it<< endl;
}

//binary search

void BS(){
    vector<int> v;
    v.push_back(3);
    for(int i = 0; i<10; i++){
        v.push_back(i);
    }
    v.push_back(3);
    cout<<binary_search(v.begin(),v.end(),9)<< endl;// ascending order!!
}

//count

void C(){
    vector<int> v;
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(4);
    v.push_back(0);
    v.push_back(0);
    v.push_back(6);
    v.push_back(7);
    v.push_back(0);

    cout<<count(v.begin(),v.end(),0)<< endl;;
}

void C2(){
    vector<Person> v;
    Person p1("aaa",10);
    Person p2("bbb",20);
    Person p3("ccc",30);
    Person p4("ddd",40);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    cout<< count(v.begin(),v.end(), p4)<<endl;
}

//count if

bool greater4(int val){
    return val>4;
}

void CI(){
    vector<int> v;
    for(int i = 0; i<10; i++){
        v.push_back(i);
    }

    cout<<count_if(v.begin(),v.end(),greater4)<<endl;
}

void CI2(){
    vector<Person> v;
    Person p1("aaa",10);
    Person p2("bbb",20);
    Person p3("ccc",30);
    Person p4("ddd",40);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    cout<< count_if(v.begin(),v.end(), greater20())<<endl;
}

int main(){
    F();
    F2();
    FI();
    FI2();
    AF();
    BS();
    C();
    C2();
    CI();
    CI2();
    return 0;
}