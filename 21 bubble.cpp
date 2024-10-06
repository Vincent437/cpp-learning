#include<iostream>
using namespace std;

int main() {

    int arr[5]={3,9,1,2,4};
    int size= sizeof(arr)/sizeof(arr[0]);
    int temp;

    for (int i=0; i<size; i++){

        for (int j =0; j< size-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i =0; i<size;i++){
        cout<< arr[i]<< endl;
    }
    return 0;
}