#include<iostream>
using namespace std;
#include<string.h>

class person{
    public:
    void set_name(string n){
        name=n;
    }
    string get_name(){
        return name;
    }

    int get_age(){
        return age;
    }

    void set_idol(string i){
        idol=i;
    }
    void set_age(int a){
        if (a>0&&a<150){
            age=a;
            cout<< "success"<< endl;
        }
        else{
            cout<< "fail"<< endl;
        }
    }
    private:
    string name;
    int age=18;
    string idol;
};

int main() {
    person p;
    p.set_name("a");
    p.set_idol("b");
    p.set_age(160);
    cout<< p.get_name()<< endl;
    cout<< p.get_age()<< endl;
    return 0;
}