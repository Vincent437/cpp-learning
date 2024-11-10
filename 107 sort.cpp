#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<random>

//sort

void int_print(vector<int>& v){
    for (vector<int>:: iterator it=v.begin(); it!= v.end(); it++){
        cout<< *it<< " ";
    }
}

template< class T>
class print{
    public:
    void operator()(T& t){
        cout<< t<< " ";
    }
};

void S(){
    vector<int> v;
    v.push_back(6);
    v.push_back(5);
    v.push_back(7);
    v.push_back(1);

    sort(v.begin(),v.end());
    int_print(v);
    cout<< endl;
    sort(v.begin(),v.end(),greater<int>());
    for_each(v.begin(), v.end(), print<int>());
    cout<< endl;
}

//random shuffle

void RS(){
    random_device rd;

    vector<int> v;
    for (int i=0; i<10; i++){
        v.push_back(i);
    }

    shuffle(v.begin(),v.end(),rd);
    for_each(v.begin(), v.end(), print<int>());
    cout<< endl;
}

//merge

void M(){
    vector<int> v1;
    vector<int> v2;
    for (int i=0; i<10; i++){
        v1.push_back(i);
    }
    for (int i=0; i<10; i++){
        v2.push_back(i+1);
    }

    vector<int> v3;
    v3.resize(v1.size()+v2.size());
    
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin()); // v1 and v2 are ordered vector(both ascending)

    for_each(v3.begin(),v3.end(),print<int>());
    cout<< endl;
}

//reverse

void R(){
    vector<int> v;
    for (int i=0; i<10; i++){
        v.push_back(i);
    }

    reverse(v.begin(),v.end());
    for_each(v.begin(),v.end(),print<int>());
    cout<< endl;
}

int main(){
    S();
    RS();
    M();
    R();
    return 0;
}