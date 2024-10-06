#include<iostream>
using namespace std;

template<class T>
class base{
    T m;
};

//class son: public base{
class son: public base<int>{

};

//2.
template<class T, class T2>
class son2: public base<T>{
    T2 obj;
}

int main(){
    son2<int, char> s;
    return 0;
}