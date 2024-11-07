#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class ADD{
    public:
    int operator()(int v1, int v2){
        return v1+v2;
    }
};

class PRINT{
    public:
    int count=0;
    void operator()(string s){
        cout<< s<< endl;
        count++;
        cout<< count<< endl;
    }
};

void test1(){
    ADD myADD;
    cout<< myADD(10,100)<< endl;
}

void test2(){
    PRINT P;
    P("sdfas");
    P("world");
}

class Greaterfive{
    public:
    bool operator()(int i){
        return i>5;
    }
};

void test3(){
    vector<int> v1;
    for (int i =0; i<10; i++){
        v1.push_back(i);
    }
    vector<int>::iterator it =find_if(v1.begin(),v1.end(),Greaterfive());
    if(it==v1.end()){
        cout<<"no result"<< endl;
    }
    else{
        cout<< *it << endl;
        cout<<"success"<< endl;
    }
}

class sortvector{
    public:
    bool operator()(int val1, int val2){
        return val1>val2;
    }
};

bool compare(int val1, int val2){
    return val1>val2;
}

void test4(){
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(10);
    v.push_back(50);
    v.push_back(70);

    sort(v.begin(),v.end());

    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        cout<<* it<< " "<< endl;
    }

    sort(v.begin(),v.end(),compare);
    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        cout<<* it<< " "<< endl;
    }
}

int main(){
    test1();
    test2();
    test3();
    test4();
    return 0;
}