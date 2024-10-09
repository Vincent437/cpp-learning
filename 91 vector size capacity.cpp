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
    for (int i=0;i<10;i++){
        v1.push_back(i);
    }
    printer(v1);

    cout<< v1.empty()<< endl;
    cout<< v1.capacity()<< endl;
    cout<< v1.size()<< endl;
    v1.resize(15, 100);
    cout<< v1.capacity()<< endl;
    printer(v1);
}

int main(){
    test1();
    return 0;
}