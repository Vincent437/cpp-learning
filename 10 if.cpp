#include <iostream>
using namespace std;

int main() {
    
    int score;

    cout << "score: " << endl;

    cin >> score;

    cout << "the score is " << score << endl;

    // no ; after if

    if(score > 600)
    {
        if (score>700)
        {
            cout << "very congrats" << endl;
        }

        else{
            cout << "congrats" <<endl;
        }
    }

    else if (score > 500)
    {
        cout << "congrats also" << endl;
    }

    else
    {
        cout << "sorry" << endl;
    }
    return 0;
}