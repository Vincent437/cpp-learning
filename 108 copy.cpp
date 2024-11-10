#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

//copy

class print{
    public:
    void operator()(int val){
        cout<< val<< " ";
    }
};

void C(){
    vector<int> v1;
    vector<int> v2;

    for (int i=0;i<10; i++){
        v1.push_back(i);
    }

    v2.resize(v1.size());

    copy(v1.begin(),v1.end(),v2.begin());

    for_each(v2.begin(),v2.end(),print());
    cout<< endl;
}

//replace

void R(){
    vector<int> v;

    for (int i=0;i<10; i++){
        v.push_back(i);
    }

    replace(v.begin(),v.end(),5,9);
    for_each(v.begin(),v.end(),print());
    cout<< endl;
}

//replace if

bool less5(int val){
    return val<5;
}

void RI(){
    vector<int> v;

    for (int i=0;i<10; i++){
        v.push_back(i);
    }

    replace_if(v.begin(),v.end(),less5, 10);
    for_each(v.begin(),v.end(),print());
    cout<< endl;
}

//swap

void S(){
    vector<int> v1;
    vector<int> v2;

    for (int i=0;i<10; i++){
        v1.push_back(i);
    }
    for (int i=10;i<20; i++){
        v2.push_back(i);
    }

    swap(v1, v2);
    for_each(v1.begin(),v1.end(),print());
    cout<< endl;
}

int main(){
    C();
    R();
    RI();
    S();
    return 0;
}