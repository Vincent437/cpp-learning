#include<iostream>
using namespace std;

const double Pi=3.1415926535;

class circle{
    public:
    double r;

    double get_perimeter(){
        return 2*Pi*r;
    }
};

class person{
    public:
    string name;
    void func(){
        name="a";
        car="b";
        passward="c";
    }

    protected:
    string car;
    private:
    string passward;
};

int main() {
    circle c1;
    c1.r=6;
    cout<< c1.get_perimeter()<< endl;

    person p;
    p.func();
    cout<< p.name<< endl;
    return 0;
}