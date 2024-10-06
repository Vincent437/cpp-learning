#include<iostream>
using namespace std;

class person{
    public:

    void showcalssname(){
        cout<<"person class"<<endl;
    }

    void showage(){
        if(this==NULL){
            return;
        }
        cout<<age<<endl;
    }
    int age;
};

int main() {

    person* p =NULL;
    p->showage();
    p->showcalssname();
    cout<<sizeof(*p)<<endl;

    return 0;
}