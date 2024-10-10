#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>

void printer(const deque<int> &d){
    for(deque<int>:: const_iterator it=d.begin(); it!= d.end(); it++){// read only
        cout<< *it<< " ";
    }
    cout<< endl;
}

void construct(){
    // 1. 
    deque<int> d1;
    for(int i=0; i<10; i++){
        d1.push_back(i);
    }
    printer(d1);

    //2. 
    deque<int> d2(d1.begin(),d1.end());
    printer(d2);

    //3. 
    deque<int> d3(10,100);
    printer(d3);

    //4. 
    deque<int> d4=d3;
    printer(d4);

    //5.
    deque<int> d5(d4);
    printer(d5);
}

void assign(){
    deque<int> d1;
    for(int i=0; i<10; i++){
        d1.push_back(i);
    }
    printer(d1);

    //1. =
    deque<int> d2;
    d2=d1;
    printer(d2);

    //2. assign
    deque<int> d3;
    d3.assign(d1.begin(),d1.end());
    printer(d3);

    //3. assign
    deque<int> d4;
    d4.assign(10,12);
    printer(d4);
}

void size(){
    deque<int> d1;
    for(int i=0; i<10; i++){
        d1.push_back(i);
    }
    printer(d1);

    // 1.empty size
    if(d1.empty()){
        cout<< "empty"<< endl;
    }
    else{
        cout<< "not empty"<< endl;
        cout<< d1.size()<< endl;
    }

    //2. resize
    d1.resize(15);
    printer(d1);

    d1.resize(20,6);
    printer(d1);

    d1.resize(5);
    printer(d1);

}

void insert(){
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_front(100);
    d1.push_front(200);
    deque<int> d2=d1;

    printer(d1);

    //pop
    d1.pop_back();
    printer(d1);

    d1.pop_front();
    printer(d1);

    //insert
    printer(d2);

    d2.insert(d2.begin(),1000);
    printer(d2);

    d2.insert(d2.begin(),2,2000);
    printer(d2);

    d2.insert(d2.begin(),d1.begin(),d1.end());
    printer(d2);
}

void erase(){
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_front(100);
    d1.push_front(200);

    deque<int> ::iterator it =d1.begin();
    it++;

    d1.erase(it);
    printer(d1);

    d1.erase(d1.begin(),d1.end());// d1.clear();
    printer(d1);
}

void fetchdata(){
    deque<int> d1;
    for(int i=0; i<10; i++){
        d1.push_back(i);
    }
    printer(d1);

    //1. []
    for(int i=0;i<d1.size();i++){
        cout<< d1[i]<< " ";
    }
    cout<< endl;

    //2. at
    for(int i=0;i<d1.size();i++){
        cout<< d1.at(i)<< " ";
    }
    cout<< endl;

    // front back
    cout<< d1.front()<< endl;
    cout<< d1.back()<< endl;
}

void sort(){
    deque<int> d1;
    d1.push_back(20);
    d1.push_back(10);
    d1.push_front(100);
    d1.push_front(200);
    printer(d1);
    
    sort(d1.begin(),d1.end());
    printer(d1);
}

int main(){
    sort();
    return 0;
}