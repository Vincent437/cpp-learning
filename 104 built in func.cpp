#include<iostream>
using namespace std;
#include<vector>
#include<functional>
#include<algorithm>

//negate plus 

void N(){
    negate<int> n;
    cout<< n(50)<< endl;
}

void P(){
    plus<float>p;
    cout<<p(1.1,3)<<endl;
}

//greater

void G(){
    vector<int> v;
    v.push_back(10);
    v.push_back(50);
    v.push_back(20);
    for(vector<int>:: iterator it=v.begin(); it!=v.end(); it++){
        cout<< *it<< endl;
    }

    sort(v.begin(),v.end(), greater<int>());
    for(vector<int>:: iterator it=v.begin(); it!=v.end(); it++){
        cout<< *it<< endl;
    }
}

//logical

void L(){
    vector<bool> v;
    v.push_back(true);
    v.push_back(true);
    v.push_back(false);
    v.push_back(true);
    v.push_back(true);
    
    for(vector<bool>::iterator it= v.begin();it!=v.end();it++){
        cout<< *it<< " ";
    }
    cout<< endl;

    vector<bool> v2;
    v2.resize(v.size());

    transform(v.begin(),v.end(),v2.begin(),logical_not<bool>());
    for(vector<bool>::iterator it= v2.begin();it!=v2.end();it++){
        cout<< *it<< " ";
    }
    cout<< endl;
}

int main(){
    N();
    P();
    G();
    L();
    return 0;
}