#include<iostream>
using namespace std;
#include<set>

void printer(set<int> &s){
    for ( set<int>::iterator it=s.begin(); it!=s.end(); it++){
        cout<< *it<< " ";
    }
    cout<< endl;
}

void construct_set(){
    set<int> s1;
    s1.insert(50);
    s1.insert(0);
    s1.insert(30);
    s1.insert(30);
    printer(s1);// auto sort no repetition

    set<int> s2(s1);
    printer(s2);

    set<int> s3;
    s3=s1;
    printer(s3);
}

void size_swap_set(){
    set<int> s1;
    s1.insert(50);
    s1.insert(0);
    s1.insert(30);

    if(s1.empty()){
        cout<< "set empty"<< endl;
    }
    else{
        cout<< "not empty"<< endl;
        cout<< s1.size()<< endl;
    }

    set<int> s2;
    s2.insert(40);
    s2.insert(0);
    s2.insert(20);

    printer(s1);
    printer(s2);
    s1.swap(s2);
    printer(s1);
    printer(s2);
    
}

void insert_delete_set(){
    set<int> s1;
    s1.insert(50);
    s1.insert(0);
    s1.insert(30);
    s1.insert(60);
    s1.insert(80);
    s1.insert(70);

    s1.erase(s1.begin());
    printer(s1);

    s1.erase(60);
    printer(s1);
    s1.erase(s1.begin(),++s1.begin());
    printer(s1);
    s1.clear();
    printer(s1);
}

void find_count_set(){
    set<int> s1;
    s1.insert(50);
    s1.insert(0);
    s1.insert(30);
    s1.insert(60);
    s1.insert(80);
    s1.insert(70);

    set<int>::iterator pos=s1.find(50);
    if(pos!=s1.end()){
        cout<< "find it "<< *pos<< endl;
    }

    int num = s1.count(50);
    cout<< num<< endl;
}

void multiset_set(){
    set<int> s1;
    pair<set<int>::iterator, bool> ret= s1.insert(50);
    if(ret.second){
        cout<< "success"<< endl;
    }
    else{
        cout<< "fail"<< endl;
    }

    ret= s1.insert(50);
    if(ret.second){
        cout<< "success"<< endl;
    }
    else{
        cout<< "fail"<< endl;
    }

    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);

    for (multiset<int>::iterator it= ms.begin(); it!= ms.end(); it++){
        cout<< (*it)<< endl;
    }
}

class compare{
    public:
    bool operator()(int v1, int v2){
        return v1> v2;
    }
};

void sort_set(){
    set<int> s1;
    s1.insert(50);
    s1.insert(0);
    s1.insert(30);
    s1.insert(60);
    s1.insert(80);
    s1.insert(70);
    printer(s1);

    set<int, compare> s2;

    s2.insert(50);
    s2.insert(0);
    s2.insert(30);
    s2.insert(60);
    s2.insert(80);
    s2.insert(70);
    for(set<int, compare>::iterator it=s2.begin();it!=s2.end(); it++){
        cout<< *it<< " ";
    }
    cout<< endl;
}

class person{
    public:
    int age;
    string name;

    person(int age, string name){
        this->age=age;
        this->name=name;
    }
};

class compare2{
    public:
    bool operator()(const person &p1, const person &p2){
            return p1.age>p2.age;
    }
};

void sort_set_2(){
    set<person,compare2> s;
    person p1(23,"sfewr");
    person p2(34,"wef");
    person p3(45,"vdcx");
    
    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    
    for(set<person,compare2>::iterator it=s.begin(); it!= s.end(); it++){
        cout<< (*it).name<< " "<< (*it).age<< endl;
    }
}

int main(){
    sort_set_2();
    return 0;
}