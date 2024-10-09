#include<iostream>
using namespace std;
#include<vector>

void printer(vector<int> &v){
    for (vector<int>::iterator it = v.begin(); it!= v.end(); it++){
        cout<< (*it)<< " ";
    }
    cout<< endl;
}

void test1(){
    vector<int> v1;
    for (int i=0; i<10; i++){
        v1.push_back(i);
    }
    printer(v1);

    //1.
    for (int i= 0; i< v1.size(); i++){
        cout<< v1[i]<< " ";
    }
    cout<< endl;

    //2.
    for (int i= 0; i< v1.size(); i++){
        cout<< v1.at(i)<< " ";
    }
    cout<< endl;

    //3.
    cout<< v1.front()<< endl;

    //4.
    cout<< v1.back()<< endl;
}


int main(){
    test1();
    return 0;
}