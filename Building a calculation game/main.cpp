#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int result;
addition (int numberOne, int numberTwo) {
    result = numberOne + numberTwo;
    return result;
};

multiplication (int numberOne, int numberTwo) {
    result = numberOne * numberTwo;
    return result;
};

subtraction (int numberOne, int numberTwo) {
    result = numberOne - numberTwo;
    return result;
}


int main()
{
    string name;
    cout << "Hello player! What is your name?"<<endl;;
    getline(cin, name);
    cout <<endl;

    cout <<name<<", Welcome to Basic Operations Game!"<<endl;
    cout <<endl;

    srand(time(NULL));

    char operators [3] = {'+', '-', '*'};
    int answer;
    int score = 0;

    for (int i = 1; i < 11; i++) {
        int numberOne = rand() % 10;
        int numberTwo = rand() % 10;
        int opNum = rand() % 3;
        cout <<i<<". "<<numberOne<<operators[opNum]<<numberTwo<< " = ";
        cin >>answer;

        if (!(int)answer) {
            cout <<"Invalid Response"<<endl;
        }

        //Calculating the answer
        int result;
        if (operators[opNum] == '+') {
            result = addition(numberOne, numberTwo);
        } else if (operators[opNum] == '*') {
            result = multiplication(numberOne, numberTwo);
        } else if (operators[opNum] == '-') {
            result = subtraction(numberOne, numberTwo);
        }


        //Giving feedback to the responses of the player
        if (answer == result) {
            cout <<"Correct! The answer is "<<result<<endl;
            score += 1;
            cout <<endl;
        } else if (answer != result) {
            cout <<"Incorrect! The answer is "<<result<<endl;
            cout <<endl;
        }

    }


    cout <<endl;
    //Displaying the results of the player
        if (score >= 8) {
            cout <<"Well done "<<name<<"! Your score is "<<score<<endl;
        } else {
            cout <<name<<", You can do better and your score is "<<score<<endl;
        }

    cout <<endl;
    cout <<"End of Game! Thanks for playing!";
    return 0;
}
