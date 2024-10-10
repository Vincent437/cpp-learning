#include<iostream>
using namespace std;
#include<vector>

void printer(vector<int> &v){
    for (vector<int>::iterator it =v.begin(); it != v.end();it++){
        cout<< (*it)<<" ";
    }
    cout<< endl;
}

void test1(){
    vector<int> v1;
    for (int i =0; i< 10; i++){
        v1.push_back(i);
    }
    printer(v1);
    vector<int> v2;
    for (int i =10; i>0; i--){
        v2.push_back(i);
    } 
    printer(v2);

    v1.swap(v2);
    printer(v1);
    printer(v2);
}
// save memory
void test2(){
    vector<int> v1;
    for (int i =0; i< 100000; i++){
        v1.push_back(i);
    }

    cout<< v1.capacity()<< endl;// 130000

    v1.resize(3);

    cout<< v1.capacity()<< endl;// 130000

    vector<int> (v1).swap(v1);
    cout<< v1.capacity()<< endl;
}

int main(){
    test2();
    return 0;
}