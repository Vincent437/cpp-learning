#include<iostream>
using namespace std;

int main()
{
    // switch
    int select=2;

    switch (select){
        case 1:
        cout<<endl;
        break;
        case 2:
        cout<<"case 2"<< endl;
        break;
        default:
        break;
    }
    // 循环
    for (int i = 0; i<10; i++){
        if (i>5){
            break;
        }
        cout<< i <<endl;
    }
    // 嵌套
    for (int i =0; i< 10; i++){
        for (int i=0; i<10; i++){
            if (i>6){
                break;
            }
            cout << '*';
        }
        cout <<endl;
    }
    return 0;
}