#include<iostream>
using namespace std;

class c1{
    int a;
};

struct s1
{
    int b;
};


int main() {
    c1 c;
    //c.a=10;
    s1 s;
    s.b=20;
    //cout<< c.a<< endl;
    cout<< s.b<< endl;
    return 0;
}