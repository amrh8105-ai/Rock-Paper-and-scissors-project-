#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    cout << "how many rounds ?" ;
    int rounds;
    cin >> rounds;
    int Sp=0, Sc=0 ;
    int r = 1;

    while (rounds --) {
        cout << "round " << r << endl;
        r++ ;
        srand(time(0));

        int computerNumber = rand() % 3;
        char computer;

        if (computerNumber == 0) {
            computer = 'r';
        } else if (computerNumber == 1) {
            computer = 'p';
        } else {
            computer = 's';
        }

        char player ;
        cout << "enter your choice (r/s/p)" << endl;
        cin >> player;

        if (computer == player) {
            cout <<"the player chose : " << player << " " << "the computer chose : " << computer << endl;
            cout << "it is a tie" << endl;
            cout << "the score is :" << " " << Sp << ':' << Sc << endl;
        }
        else if ((player == 'r') && (computer == 's')) {
            cout <<"the player chose : " << player << " " << "the computer chose : " << computer << endl;
            cout << "player wins" << endl;
            Sp++;
            cout << "the score is :" << " " << Sp << ':' << Sc << endl;
        }
        else if ((player == 'r') && (computer == 'p')) {
            cout <<"the player chose : " << player << " " << "the computer chose : " << computer << endl;
            cout << "computer wins" << endl;
            Sc++;
            cout << "the score is :" << " " << Sp << ':' << Sc<< endl;
        }
        else if ((player == 's') && (computer == 'p')) {
            cout <<"the player chose : " << player << " " << "the computer chose : " << computer << endl;
            cout << "player wins" << endl;
            Sp++ ;
            cout << "the score is :" << " " << Sp << ':' << Sc << endl;
        }
        else if ((player == 's') && (computer == 'r')) {
            cout <<"the player chose : " << player << " " << "the computer chose : " << computer << endl;
            cout << "computer wins" << endl;
            Sc++ ;
            cout << "the score is :" << " " << Sp << ':' << Sc << endl;
        }
        else if ((player == 'p') && (computer == 's')) {
            cout <<"the player chose : " << player << " " << "the computer chose : " << computer << endl;
            cout << "computer wins" << endl ;
            Sc++ ;
            cout << "the score is :" << " " << Sp << ':' << Sc << endl;
        }
        else {
            cout <<"the player chose : " << player << " " << "the computer chose : " << computer << endl;
            cout << "player wins" << endl;
            Sp++ ;
            cout << "the score is :" << " " << Sp << ':' << Sc << endl;

        }

    }

    cout << "===== Final score =====" << endl;
    cout << "the final score is :" << " " << Sp << ':' << Sc << endl;
    if (Sp > Sc) {
        cout << "player wins overall" << endl;
    }
    else if (Sp < Sc) {
        cout << "computer wins overall" << endl;
    }
    else {
        cout << "it is a tie overall" << endl;
    }

    return 0;
}
