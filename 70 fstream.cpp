#include<fstream>
#include<iostream>
using namespace std;
#include<string.h>

void test1(){
    ofstream ofs;
    ofs.open("fstream.txt",ios::out);
    ofs<<"learning c++"<< endl<< "so far so good"<< endl;
    ofs.close();
}

void test2(){
    ifstream ifs;
    ifs.open("fstream.txt",ios::in);
    if (!ifs.is_open()){
        cout<< "failed"<< endl;
        return;
    }
    /*char buf[1024]={0};
    while(ifs>>buf){
        cout<< buf << endl;
    }*/
    /*char buf[1024]={0};
    while( ifs.getline(buf,sizeof(buf))){
        cout<< buf<< endl;
    }*/
    string buf;
    while(getline(ifs, buf)){
        cout<< buf<< endl;
    }
    /*char c;
    while((c=ifs.get())!=EOF){
        cout<< c;
    }*/
    ifs.close();
}

int main() {
    test2();
    return 0;
}