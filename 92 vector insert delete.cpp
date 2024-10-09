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
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);

    printer(v1);

    v1.pop_back();
    printer(v1);

    v1.insert(v1.begin(), 100);
    printer(v1);
    v1.insert(v1.begin(),2, 100);
    printer(v1);

    v1.erase(v1.begin());
    printer(v1);

    v1.erase(v1.begin(),v1.end());//==v1.clear();
    printer(v1);
}

int main(){
    test1();
    return 0;
}