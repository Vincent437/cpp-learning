#include<iostream>
using namespace std;

int main() {
    //1
    int arr[5];
    arr[0]=10;
    arr[1]=10;
    arr[2]=10;
    arr[3]=10;
    arr[4]=10;
    
    //cout << arr[4] << endl;

    //2 没全填写完会用0填补
    int arr2[5]={10,20,30,40,50};

    for (int i=0;i<5;i++){
        cout << arr[i] << endl;
    }

    // 3
    int arr3[]={10,20,30,40,50};

    int a = sizeof(arr); //return the length of the group
    int b = sizeof(arr[0]);
    //a/b; // culculate the amount of the group

    //cout<< (int)arr << endl; //数组首地址
    return 0;
}