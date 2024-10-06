#include<iostream>
using namespace std;
#include<vector>

void test1(){
    vector<vector<int>> v;

    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    vector<int> v5;
    
    for( int i =0; i<5; i++){
        v1.push_back(i+1);
        v2.push_back(i+1);
        v3.push_back(i+1);
        v4.push_back(i+1);
        v5.push_back(i+1);
    }

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    v.push_back(v5);
    
    for(vector<vector<int>>:: iterator it=v.begin(); it!= v.end(); it++){
        for(vector<int>:: iterator it2=it->begin(); it2!=it->end(); it2++){
            cout<< (*it2)<<" ";
        }
        cout<< endl;
    }
}

int main(){
    test1();
    return 0;
}