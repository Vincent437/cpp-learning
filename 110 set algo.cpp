#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<set>
#include<numeric>

//set intersection

void print(int a){
    cout<< a<< " ";
}

void SI(){
    vector<int> v1;
    vector<int> v2;

    vector<int> v3;

    for (int i=0; i<10; i++){
        v1.push_back(i);
        v2.push_back(i+5);
    }

    v3.resize(min(v1.size(),v2.size()));

    vector<int>:: iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    for_each(v3.begin(),v3.end(), print);
    cout<< endl;
    for_each(v3.begin(), itEnd, print);
    cout<< endl;
}

//set union

void SU(){
    vector<int> v1;
    vector<int> v2;

    vector<int> v3;

    for (int i=0; i<10; i++){
        v1.push_back(i);
        v2.push_back(i+5);
    }

    v3.resize(v1.size()+v2.size());

    vector<int>:: iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    for_each(v3.begin(),v3.end(), print);
    cout<< endl;
    for_each(v3.begin(), itEnd, print);
    cout<< endl;
}

//set difference

void SD(){
    vector<int> v1;
    vector<int> v2;

    vector<int> v3;

    for (int i=0; i<10; i++){
        v1.push_back(i);
        v2.push_back(i+5);
    }

    v3.resize(max(v1.size(),v2.size()));

    vector<int>:: iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    for_each(v3.begin(),v3.end(), print);
    cout<< endl;
    for_each(v3.begin(), itEnd, print);
    cout<< endl;

    vector<int>:: iterator itEnd2 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), itEnd);
    for_each(v3.begin(),v3.end(), print);
    cout<< endl;
    for_each(v3.begin(), itEnd2, print);
    cout<< endl;
}

int main(){
    SI();
    SU();
    SD();
    return 0;
}