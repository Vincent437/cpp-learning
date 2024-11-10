#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<numeric>

//accumulate

void A(){
    vector<int> v;
    for (int i=0; i<101; i++){
        v.push_back(i);
    }

    int re= accumulate(v.begin(),v.end(),0); // the thrid argument is a initial num
    cout<<re<< endl;
}

//fill

void print(int a){
    cout<< a<< " ";
}

void F(){
    vector<int> v(10);

    fill(v.begin(),v.end(),50);
    for_each(v.begin(),v.end(), print);
    cout<< endl;
    vector<int>::iterator it1= v.begin();

    v.resize(20);
    vector<int>::iterator it= v.begin();

    it++;
    fill(it, v.end(),100);
    for_each(v.begin(),v.end(), print);
    cout<< endl;
}

int main(){
    A();
    F();
    return 0;
}