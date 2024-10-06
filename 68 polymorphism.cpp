#include<iostream>
using namespace std;

//有继承关系；子类要重写父类虚函数；父类的指针指向子类对象

class animal{
    public:
    virtual void speak(){//虚函数
        cout<< "speaking"<< endl;
    }
};

class dog: public animal{
    public:
    void speak(){
        cout<< "dog barking"<< endl;
    }
};

void dospeak(animal &a){//父子类型转换
    a.speak();
}

int main() {
    dog d;
    dospeak(d);
    animal a;
    dospeak(a);
    cout<< sizeof(animal)<< endl;
    return 0;
}