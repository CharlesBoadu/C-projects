#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    string name, playAgain;
    int num;
    int secretNumber = rand() % 10;
    int numberOfGuesses = 2;
    playAgain = "yes";

    cout <<"What is your name: ";
    getline(cin, name);
    cout<<endl;

    cout <<"Hello "<<name<<", welcome to Guess the secret number game!"<<endl;
    cout<<endl;

    cout <<"You only have 3 tries. Best of luck in your guesses!"<<endl;
    cout<<endl;

    int i = 0;
    do {

        if (playAgain == "no") {
            break;
        }

        cout <<endl;
        while (i < 3) {
        cout <<"From 1 - 10, what is the secret number: ";
        cin >>num;

        if (num == secretNumber) {
            cout <<"Congratulations! You have guessed rightly!"<<endl;
            secretNumber = rand() % 10;
            break;
        } else {
            cout <<"Oops! Guess incorrect! "<<numberOfGuesses--<<" guess left! "<<endl;
            i++;
            cout <<endl;
        }

        if (i == 3) {
            cout<<"Out of Guesses! Game Over!";
            cout<<endl;
        }
        }

        cout <<endl;
        cout <<"Play Again?\nType 'yes' to play again and 'no' to end game: ";
        cin >>playAgain;
        i = 0;
        numberOfGuesses = 2;
    } while (playAgain == "yes");

    cout<<endl;
    cout<<"Thanks for playing Guessing game! Bye!";
    return 0;
}
