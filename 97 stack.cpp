#include<iostream>
using namespace std;
#include<stack>

void sta(){
    stack<int> s;

    s.push(10);

    while(!s.empty()){
        cout<< s.top()<<endl;

        s.pop();
    }

    cout<< s.size()<< endl;
}

int main(){
    sta();
    return 0;
}