#include<fstream>
#include<string>
#include<iostream>
using namespace std;

class person{
    public:
    char name[64];
    int age;
};

void test1(){
    ofstream ofs("binary.txt",ios::out| ios::binary);
    //ofs.open("binary.txt",ios::out| ios::binary);
    person p={"a",20};
    ofs.write((const char *)&p,sizeof(person));
    ofs.close();
}

void test2(){
    ifstream ifs;
    ifs.open("binary.txt",ios::in| ios::binary);
    if(!ifs.is_open()){
        cout<<"failed"<<endl;
    }
    person p;
    ifs.read((char *)&p, sizeof(person));
    cout<< p.name<< endl<< p.age<< endl;
    ifs.close();
}

int main() {
    test2();
    return 0;
}
