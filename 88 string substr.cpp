#include<iostream>
using namespace std;
#include<string>

void test1(){
    string str="abcdef";

    cout<< str.substr(1,3)<< endl;
}

int main(){
    test1();
    return 0;
}