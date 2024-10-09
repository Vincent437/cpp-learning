#include<iostream>
using namespace std;
#include<vector>

void printer(vector<int> &v){
    for(vector<int>:: iterator it= v.begin(); it!=v.end(); it++){
        cout<< *it<< " ";
    }
    cout<< endl;
}

void test1(){
    vector<int> v1;
    for(int i=0;i< 10;i++){
        v1.push_back(i);
    }
    printer(v1);

    vector<int> v2;
    v2=v1;
    printer(v2);

    vector<int> v3;
    v3.assign(v1.begin(),v1.end());
    printer(v3);

    vector<int> v4;
    v4.assign(10,100);
    printer(v4);
}

int main(){
    test1();
    return 0;
}