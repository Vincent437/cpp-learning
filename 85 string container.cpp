#include<iostream>
using namespace std;
#include<string>

void test1(){
    string s1;
    const char* str ="hello world";
    string s2(str);
    cout<< s2<< endl;
    string s3(s2);
    cout<< s3<< endl;
    string s4(10,'a');
    cout<< s4<< endl;
}

// assign values to string objects
void test2(){
    string str1;
    str1= "hello world";
    cout<< str1<< endl;
    
    string str2;
    str2 = str1;
    cout<< str2<< endl;
    
    string str3;
    str3='a';
    cout<< str3<< endl;
    
    string str4;
    str4.assign("hello c++");
    cout<< str4<< endl;
    
    string str5;
    str5.assign("hello c++",5);
    cout<< str5<< endl;
    
    string str6;
    str6.assign(str5);
    cout<< str6<< endl;
    
    string str7;
    str7.assign(10,'a');
    cout<< str7<< endl;
}

// append string
void test3(){
    string str1 = "I ";
    str1 += "love play video games";
    str1 += ':';
    string str2 = " red dead redemption";
    str1 += str2;

    cout<< str1<< endl;

    string str3 = "I ";
    str3.append("love");
    str3.append(" games 123456", 6);
    str3.append(str2);
    str3.append(str2, 10,10);

    cout<< str3<< endl;
}

int main(){
    test3();
    return 0;
}