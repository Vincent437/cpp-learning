#include<iostream>
using namespace std;

void swap(int *p, int *p2){
    int temp=*p;
    *p=*p2;
    *p2=temp;

}
int main() {
    //1 pass value
    int a =10;
    int b =20;

    //2 pass address
    swap(&a,&b);
    cout<< a<< endl;
    return 0;
}