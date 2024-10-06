#include<iostream>
using namespace std;

int main() {

    // 1
    int arr[3][4];
    arr[0][1]=8;
    for (int i=0;i<3;i++){
        for (int j=0; j<4;j++){
            cout << arr[i][j]<< " ";
        }
        cout<< endl;
    }
    //2
    int arr2[2][3]={
        {1,2,3},
        {4,5,6}
    };

    for (int i=0;i<2;i++){
        for (int j=0; j<3;j++){
            cout << arr2[i][j]<< " ";
        }
        cout<< endl;
    }

    //3

    int arr3[2][3]={1,2,3,4,5,6};

    //4
    int arr4[][3]={1,2,3,4,5,6};
    for (int i=0;i<2;i++){
        for (int j=0; j<3;j++){
            cout << arr4[i][j]<< " ";
        }
        cout<< endl;
    }

    // memory

    cout << sizeof(arr)<<endl;
    cout << sizeof(arr[0])<< endl;
    cout << sizeof (arr[0][0])<< endl;
    // address
    cout << arr<< endl;
    cout << &arr[0][0]<< endl;



    return 0;
}