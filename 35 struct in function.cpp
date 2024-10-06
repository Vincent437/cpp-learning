#include<iostream>
using namespace std;

struct stu{
    int score;
};

void print(stu s){
    s.score=90;
    cout<< s.score << endl;
}

void print2(stu * p){
    p->score=99;
    cout<< p->score<< endl;
}

int main() {

    stu stud{
        132
    };

    print(stud);

    cout<< stud.score<< endl;

    print2(&stud);

    cout<< stud.score<< endl;

    return 0;
}