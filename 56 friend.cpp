#include<iostream>
using namespace std;
#include<string.h>

class building;

class goodfriend{
    
    public:
    building * b;
    goodfriend();
    void visit();
};
class building{
    friend void goodfriend::visit();
    public:
    string sittingroom;

    building(){
        sittingroom="sittingroom";
        bedroom="bedroom";
    }
    private:
    string bedroom;
};



void goodfriend::visit(){
    cout<<"visiting "<< b->sittingroom<<endl;
    cout<<"visiting "<< b->bedroom<<endl;
}

goodfriend::goodfriend(){
    b = new building;
}

int main() {

    goodfriend gf;
    gf.visit();
    return 0;
}