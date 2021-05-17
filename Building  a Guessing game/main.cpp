#include <iostream>

using namespace std;

int main()
{
    string name;
    int num;
    int secretNumber = 5;
    int numberOfGuesses = 2;

    cout <<"What is your name: "<<endl;
    getline(cin, name);
    cout<<endl;

    cout <<"Hello "<<name<<", welcome to Guess the secret number game!"<<endl;
    cout<<endl;

    cout <<"You only have 3 tries. Best of luck in your guesses!"<<endl;
    cout<<endl;

    int i = 0;
    while (i < 3) {
        cout <<"From 1 - 10, what is the secret number: "<<endl;
        cin >>num;

        if (num == secretNumber) {
            cout <<"Congratulations! You have guessed rightly!"<<endl;
            break;
        } else {
            cout <<"Oops! Guess incorrect! "<<numberOfGuesses--<<" guess left! "<<endl;
            i++;
            cout <<endl;
        }
    }

    cout <<endl;

    if (i == 3) {
        cout<<"Out of Guesses! Game Over!";
    }

    return 0;
}
