#include<iostream>
using namespace std;
#include<string>

void test1(){
    string str1="hello";
    cout<< str1<< endl;

    str1[3]='x';
    for(int i=0; i< str1.size();i++){
        cout<< str1[i]<< " ";
    }
    cout<< endl;

    for(int i=0; i< str1.size();i++){
        cout<< str1.at(i)<< " ";
    }
    cout<< endl;
}

void test2(){
    string str ="hello";
    str.insert(2,"sfs");
    cout<< str<< endl;

    str.erase(2,3);
    cout<< str<< endl;
}

int main(){
    test2();
    return 0;
}