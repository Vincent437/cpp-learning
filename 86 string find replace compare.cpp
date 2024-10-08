#include<iostream>
using namespace std;
#include<string>

void test1(){
    string str1 = "abcdefghijkde";
    cout<< str1.find("de",2)<< endl;// if not exist, return -1
    cout<< str1.rfind("de")<< endl;// rfind from the right to search
}

void test2(){
    string str1 = "abcdsefsf";
    cout<< str1.replace(1,3,"2312")<< endl;// replace 3 chars from 1 with the string
}

void test3(){
    string str1= "hello1";
    string str2= "hello";

    if(str1.compare(str2)==0){
        cout<< "same"<< endl;
    }
    else if(str1.compare(str2)>0){
        cout<< "bigger"<< endl;
    }
    else if(str1.compare(str2)<0){
        cout<< "smaller"<< endl;
    }

}

int main(){
    test3();
    return 0;
}