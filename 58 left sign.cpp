#include<iostream>
using namespace std;

class person{
    friend ostream& operator<<(ostream &cout, person &p);
    private:
    /*void operator<<(){不利用成员函数

    }*/

    int a;
    person(){

    }
    public:
    person(int a1):a(a1){

    }

};

ostream& operator<<(ostream &cout, person &p){
    cout << p.a;
    return cout;
}

int main() {
    person p1(10);
    cout<<p1<<endl;
    return 0;
}