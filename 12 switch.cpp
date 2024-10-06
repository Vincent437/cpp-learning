#include <iostream>
using namespace std;

int main() {
    
    cout << "please rate this movie" << endl;

    int score;

    cin >> score;
    // only input int or char in switch
    switch(score)
    {
        case 10 :
            cout << "classic" << endl;
            break;
        case 9 :
            cout << "good" << endl;
            break;
        case 8 :
        cout << "normal" << endl;
        default :
        cout << "not good" << endl;
    }
    
    return 0;
}