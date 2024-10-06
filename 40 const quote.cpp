#include<iostream>
using namespace std;

void print(const int & v){
    //v=100;
    cout<< v<< endl;
}

int main() {

    const int & ref =10;
    int a =10;
    print(a);
    cout<< a<< endl;


}