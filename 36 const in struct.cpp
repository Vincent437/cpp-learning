#include<iostream>
using namespace std;

struct stud{
    int score;
    const int age;
};


// pointer consume less memory
void print(stud * s){
    //s->age=40;
    cout<< s->age << s->score <<endl;
}

int main() {

    stud s ={ 110, 30};

    print(&s);

    return 0;
}