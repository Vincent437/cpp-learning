#include<iostream>
using namespace std;

class animal{//虚基类
    public:
    int age;
};

class sheep :virtual public animal{

};

class tuo :virtual public animal{

};
// 虚继承
class sheeptuo : public sheep, public tuo{

};

void test1(){
    sheeptuo st;
    st.age=18;
}

int main() {

    return 0;
}