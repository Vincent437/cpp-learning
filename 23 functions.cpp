#include<iostream>
using namespace std;

int add(int num1,int num2) {
    num1=100;
    int result =num1+num2;
    return result;
}

int main(){
    int num1=3;
    int num2=4;

    int result= add(num1,num2);
    cout<< result<< endl;
    cout<< num1<<endl;
    return 0;
}


void func(){
    // no return needed
}
