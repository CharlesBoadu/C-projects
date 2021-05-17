#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    string questions [4] = {
        " What is the color of apple?",
        " What is the color of the sea?",
        " What is the color of watermelon?",
        " What is the color of Banana?"
    };


    string answers [4] = {
        "red", "blue", "green", "yellow"
    };

    string answer, name;
    int score;

    cout <<"What is your name: ";
    getline(cin, name);

    cout <<"Hello "<<name<<", Welcome to Questions and Answers game!"<<endl;

    cout <<endl;

    srand(time(NULL));

    for (int i = 1; i<5; i++) {
        int questionNumber = rand() % 4;
        cout<<i<<"."<<questions[questionNumber]<<endl;
        getline(cin, answer);

        if (int(questionNumber) == 0 && answer == "red") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 2 && answer == "green") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 3 && answer == "yellow") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 1 && answer == "blue") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else {
            cout <<"Oops! thats Incorrect!"<<endl;
            cout <<endl;
        }
    }

    cout <<"Game Over! "<<name<<", your score is "<<score<<endl;

    if (score >= 3) {
        cout <<"Well done! Keep it up!"<<endl;
    } else {
    cout <<"You can do better!"<<endl;
    }
    return 0;
}
