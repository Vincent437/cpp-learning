#include<iostream>
using namespace std;
#include<string.h>

class building{
    friend void goodguy(building &b);//友元（全剧函数）
    friend class goodfriend;//友元（类）
    public:
    string sittingroom;

    building(){
        sittingroom="sittingroom";
        bedroom="bedroom";
    }
    private:
    string bedroom;
};

class goodfriend{
    
    public:
    building * b;
    goodfriend();
    void visit();
};

void goodfriend::visit(){
    cout<<"visiting "<< b->sittingroom<<endl;
    cout<<"visiting "<< b->bedroom<<endl;
}

goodfriend::goodfriend(){
    b = new building;
}

void goodguy(building &b){
    cout<<b.sittingroom<<endl;
    cout<<b.bedroom<<endl;
}

int main() {
    //building b;
    //goodguy(b);
    goodfriend gf;
    gf.visit();
    return 0;
}