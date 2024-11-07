#include<iostream>
using namespace std;
#include<map>

void printer(map<int, int> &m){
    for(map<int, int>:: iterator it= m.begin(); it!= m.end(); it++){
        cout<< (*it).first<< " "<< (*it).second<< " ";
    }
    cout<<endl;
}

void construct_map(){
    map<int, int> m;
    m.insert(pair<int, int> (1,10));
    m.insert(pair<int, int> (2,30));
    m.insert(pair<int, int> (3,60));
    m.insert(pair<int, int> (8,90));
    printer(m);

    map<int, int> m2(m);
    printer(m2);

    map<int,int> m3;
    m3= m2;
    printer(m3);
}

void size_swap(){
    map<int, int> m;
    m.insert(pair<int, int> (1,10));
    m.insert(pair<int, int> (2,30));
    m.insert(pair<int, int> (3,60));
    m.insert(pair<int, int> (8,90));

    if(m.empty()){
        cout<< "empty"<< endl;
    }
    else{
        cout<< "not empty"<< endl;
        cout<< m.size()<< endl;
    }

    map<int, int> m2;
    m2.insert(pair<int, int> (12,42342));
    
    m.swap(m2);
    printer(m);
    printer(m2);
}

void insert_delete(){
    map<int, int> m;
    m.insert(pair<int, int> (1,10));
    m.insert(pair<int, int> (4,30));
    m.insert(pair<int, int> (3,60));
    m.insert(pair<int, int> (8,90));
    printer(m);

    m.insert(make_pair(2,20));
    printer(m);

    m.insert(map<int,int>::value_type(50,500));
    printer(m);

    m[90]=78;// cout<<m[5]<<endl; will create a pair<int, int> (5,0)
    printer(m);

    m.erase(m.begin());
    printer(m);

    m.erase(90);// key instead of value
    printer(m);

    m.clear();
    //m.erase(m.begin(),m.end());
    printer(m);
}

void find_count(){
    map<int, int> m;
    m.insert(pair<int, int> (1,10));
    m.insert(pair<int, int> (4,30));
    m.insert(pair<int, int> (3,60));
    m.insert(pair<int, int> (8,90));

    map<int, int>::iterator it= m.find(4);
    if(it!=m.end()){
        cout<< "success "<< it->second<<endl;
    }
    else{
        cout<<"fail"<< endl;
    }

    int num = m.count(3);
    cout<< num<< endl;
}

class compare{
    public:
    bool operator()(int v1, int v2) const{
        return v1>v2;
    }
};

void sort_map(){
    map<int, int, compare> m;
    m.insert(pair<int, int> (1,10));
    m.insert(pair<int, int> (4,30));
    m.insert(pair<int, int> (3,60));
    m.insert(pair<int, int> (8,90));

    for(map<int, int, compare>:: iterator it= m.begin(); it!= m.end(); it++){
        cout<< (*it).first<< " "<< (*it).second<< " ";
    }
    cout<<endl;
    
}

int main(){
    sort_map();
    return 0;
}