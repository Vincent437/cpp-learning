#include<iostream>
using namespace std;

int main()
{
    cout << "1" <<endl;
    
    cout << "2" <<endl;
    
    goto label;
    
    
    cout << "3" <<endl;

label:
    
    cout << "4" <<endl;
    
    return 0;
}