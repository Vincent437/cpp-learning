#include<iostream>
using namespace std;

class person{
    public:
    int a;
    int b;
    int c;

    /*person(int aa, int bb, int cc){
        a=aa;
        b=bb;
        c=cc;
    }*/

    person(int aa, int bb, int cc):a(aa),b(bb),c(cc){

    }
};

int main() {
    person p(10,20,30);
    cout<< p.a<< endl;

    return 0;
}