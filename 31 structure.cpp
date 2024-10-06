#include<iostream>
using namespace std;
#include<string.h>

//create a structure

struct Student{
    string name;

    int age;

    int score;
}s3;

//create concerte 

int main() {
    Student s1;
    s1.name="l";
    s1.age=20;
    s1.score=100;

    struct Student s2 ={"good",20,90};

    s3.score = 80;

    cout<< s2.name<< " "<<s3.score<< endl;
    return 0;
}