#include<iostream>
using namespace std;
#include<vector>

// decrease dynamic increasing space
void test1(){
    vector<int> v1;

    int num=0;
    int *p=nullptr;
    for (int i =0;i< 100000;i++){
        v1.push_back(i);
        if(p != &v1[0]){
            p=&v1[0];
            num++;
        }
    }

    cout<< num<< endl;

}

void test2(){
    vector<int> v1;
    v1.reserve(100000);
    int num=0;
    int *p=nullptr;
    for (int i =0;i< 100000;i++){
        v1.push_back(i);
        if(p != &v1[0]){
            p=&v1[0];
            num++;
        }
    }

    cout<< num<< endl;

}

int main(){
    test2();
    return 0;
}