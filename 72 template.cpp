#include<iostream>
using namespace std;

template< typename T>

void sw(T &a, T &b){
    T temp=a;
    a=b;
    b=temp;
}
template<class temp>
void s(){
    cout<<"func"<<endl;
}
int main(){
    int a=10;
    int b=30;

    //1.
    sw(a,b);
    cout<<a<<"\n"<<b<<endl;

    //2.
    sw<int>( a, b);
    cout<<a<<"\n"<<b<<endl;

    //3.
    s<int>();

    return 0;
}

