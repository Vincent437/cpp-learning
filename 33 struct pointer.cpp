#include<iostream>
using namespace std;
#include<string.h>

struct Student{
    string name;
    int score;
};

int main() {

    Student s ={
        "z",100
    };

    Student * p = &s;

    cout<< p->name<<endl;

    return 0;
}