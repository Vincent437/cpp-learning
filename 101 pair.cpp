#include<iostream>
using namespace std;

void pair_p(){
    pair<string, int> p("dsfds",45);
    cout<< p.first<< endl;
    cout<< p.second<< endl;

    pair<string, int> p2= make_pair("shdfkjah",12);
    cout<< p2.first<< endl;
    cout<< p2.second<< endl;
}

int main(){
    pair_p();
    return 0;
}