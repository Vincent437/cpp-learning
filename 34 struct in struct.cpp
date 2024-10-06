#include<iostream>
using namespace std;

struct student{
    int score;
};

struct teacher{
    int id;
    student stu;
};

int main() {
    teacher t;
    t.id = 123;
    t.stu.score=100;

    cout<< t.id << endl;
    cout<< t.stu.score << endl;

    return 0;
}