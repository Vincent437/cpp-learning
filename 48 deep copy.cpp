#include<iostream>
using namespace std;

class person{
    public:
    person(){
        cout<< "default"<< endl;
    }
    person(int a, int h){
        age=a;
        height=new int(h);
        cout<< "argument"<< endl;
    }
    person(const person &p){
        age=p.age;
        height = new int(*p.height);
        cout<< "copy" <<endl;
    }
    ~person(){
        delete height;
        height = nullptr;
        cout<< "destroier"<< endl;
    }
    int age;
    int * height;
};

//浅拷贝堆区内容重复释放

void test1(){
    person p1(18, 160);person p2(p1);*p1.height=180;
    cout<< p1.age<< " "<< *p1.height<< endl;
    
    
    cout<< p2.age<< " "<< *p2.height<< endl;
}

int main() {
    test1();
    return 0;
}