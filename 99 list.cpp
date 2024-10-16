#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

void printer(const list<int> l){
    for(list<int>::const_iterator it= l.begin(); it!= l.end(); it++){
        cout<< *it<< " ";
    }
    cout<< endl;
}

void construct_list(){

    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    printer(l1);

    list<int> l2(l1.begin(),l1.end());
    printer(l2);

    list<int> l3(l1);
    printer(l3);

    list<int> l4(10,52);
    printer(l4);
}

void assign_list(){

    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    printer(l1);

    list<int> l2;
    l2=l1;
    printer(l2);

    list<int> l3;
    l3.assign(l1.begin(), l1.end());
    printer(l3);

    list<int> l4;
    l4.assign(10,64);
    printer(l4);

}

void swap_list(){
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    printer(l1);

    list<int> l2;
    l2.assign(10,12);
    printer(l2);

    swap(l1, l2);
    printer(l1);
    printer(l2);
}

void size_list(){
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    printer(l1);

    if(l1.empty()){
        cout<< "l is empty"<< endl;
    }
    else{
        cout<< "l is not empyt "<< l1.size()<< endl;
    }

    l1.resize(6);
    printer(l1);

    l1.resize(10,100);
    printer(l1);
}

void insert_delete_list(){
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_front(100);
    l1.push_front(200);
    l1.push_front(300);
    printer(l1);

    l1.pop_back();
    printer(l1);

    l1.pop_front();
    printer(l1);

    l1.insert(l1.begin(),1000);
    printer(l1);

    list<int>::iterator it=l1.begin();
    l1.insert(++it,500);
    printer(l1);

    l1.erase(it);
    printer(l1);

    l1.remove(10);// delete every 10
    printer(l1);

    l1.clear();
    printer(l1);
}

void fetch_list(){
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);

    cout<< l1.front()<< endl;
    cout<< l1.back()<< endl;

    list<int>::iterator it=l1.begin();
    it++;//no it=it+1;
    it--;

    cout<< *it<< endl;
}

bool compare(int v1, int v2){
    return v1>v2;
}

void reverse_sort_list(){
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);

    l1.reverse();
    printer(l1);

    l1.sort();// do not support random access iterator, so is not the same as standard sort()
    printer(l1);
    l1.sort(compare);
    printer(l1);
}

int main(){
    reverse_sort_list();

    return 0;
}