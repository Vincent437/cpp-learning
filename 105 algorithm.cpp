#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<functional>

//for each

void print(int val){
    cout<< val<<" ";
}

class pri{
    public:
    void operator()(int val){
        cout<< val<<" ";
    }
};

void F(){
    vector<int> v;
    for (int i =0; i<10; i++){
        v.push_back(i);
    }
    
    for_each(v.begin(), v.end(), print);
    cout<< endl;

    for_each(v.begin(), v.end(), pri());
    cout<< endl;
}

//transform

int operate(int val){
    return val;
}

void printer(int val){
    cout<<val+10<<endl;
}

void T(){
    vector<int> v;
    for (int i =11; i<20; i++){
        v.push_back(i);
    }

    vector<int> v2;
    v2.resize(v.size());
    transform(v.begin(),v.end(), v2.begin(), operate);

    for_each(v2.begin(), v2.end(), printer);
    cout<< endl;
}



int main(){
    //F();
    T();
    return 0;
}