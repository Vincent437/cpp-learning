#include<iostream>
using namespace std;

class myinteger{
    friend ostream& operator<<(ostream& cout, myinteger myint);
    public:
    myinteger(){
        num=0;
    }

    myinteger& operator++(){
        num++;
        return *this;
    }

    myinteger operator++(int){//后置用int区分
        myinteger temp=*this;
        num++;
        return temp;
    }


    private:
    int num;
};

void front(){

}

void behind(){

}

ostream& operator<<(ostream& cout, myinteger myint){
    cout<<myint.num;
    return cout;
}

int main() {
    myinteger myint;
    cout<< myint++<< endl;
    cout<< myint++<< endl;
    return 0;
}