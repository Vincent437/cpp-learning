#include<iostream>
using namespace std;
#include<vector>

void printer(vector<int> &v){
    for(vector<int>:: iterator it= v.begin(); it!=v.end(); it++){
        cout<< *it<< " ";
    }
    cout<< endl;
}
// construct vector 
void test1(){
    //1. 
    vector<int> v1;
    for(int i; i<10; i++){
        v1.push_back(i);
    }
    printer(v1);
    
    //2.
    vector<int> v2(v1.begin(), v1.end());
    printer(v2);

    //3.
    vector<int> v3(10,100);
    printer(v3);

    //4. 
    vector<int> v4(v3);
    printer(v4);
}

int main(){
    test1();
    return 0;
}
