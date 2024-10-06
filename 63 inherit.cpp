#include<iostream>
using namespace std;

class BasePage{
    public:
    void head(){
        cout<< "head"<<endl;
    }
};

class Java: public BasePage{
    public:
    void content(){
        cout<< "java"<< endl;
    }
};

class Python: public BasePage{
    public:
    void content(){
        cout<< "python"<< endl;
    }
};

int main() {
    Java j;
    j.head();
    j.content();
    Python p;
    p.head();
    p.content();
    return 0;
}