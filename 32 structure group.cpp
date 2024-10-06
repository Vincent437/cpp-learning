#include<iostream>
using namespace std;
#include<string.h>

struct Student{
    string name;
    int score;
};
int main() {
    struct Student stu[2]={
        {"z",100},
        {"l",100}
    };

    stu[1].score=1000;
    for (int i=0 ; i< 2; i++){
        cout << stu[i].name<<" "<< endl;
    }
    return 0;
}