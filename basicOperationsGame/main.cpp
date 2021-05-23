#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <limits>

using namespace std;

int main()
{
    string name, endGame;
    endGame = "no";
    cout << "Hello player! What is your name: ";
    getline(cin, name);
    cout <<endl;

    cout <<name<<", Welcome to Basic Operations Game!\nEnter the correct value for the question presented.\nNB: You score 1 point for a correct response and 0 point for an Incorrect response"<<endl;
    cout <<endl;

    srand(time(NULL));

    char operators [3] = {'+', '-', '*'};
    int answer, result, percentage;

    do {
        int score = 0;

        if (endGame == "yes") {
            break;
        } else {
            cout <<endl;
            cout <<"Welcome again to Basic Operations Game!"<<endl;
            for (int i = 1; i < 11; i++) {
                int numberOne = rand() % 10;
                int numberTwo = rand() % 10;
                int opNum = rand() % 3;
                cout <<"Q"<<i<<". "<<numberOne<<operators[opNum]<<numberTwo<< " = ";
                cin >>answer;

                while(cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout <<"Invalid Response. Input must be an integer!"<<endl;
                cout <<endl;
                cout <<"Q"<<i<<". "<<numberOne<<operators[opNum]<<numberTwo<< " = ";
                cin >> answer;
                }

                //Calculating the answer
                if (operators[opNum] == '+') {
                    result = numberOne + numberTwo;
                } else if (operators[opNum] == '*') {
                    result = numberOne * numberTwo;
                } else if (operators[opNum] == '-') {
                    result = numberOne - numberTwo;
                }


                //Giving feedback to the responses of the player
                if (answer == result) {
                    cout <<"Correct! The answer is "<<result<<endl;
                    score += 1;
                    cout <<endl;
                } else {
                    cout <<"Incorrect! The answer is "<<result<<endl;
                    cout <<endl;
                }

            }


            cout <<endl;

            //Calculating the percentage of the score
            percentage = score * 10;

            //Displaying the results of the player
            cout <<"Score: "<<percentage<<"\tPercentage: "<<percentage<<"%"<<"\t\t";

            if (percentage >= 80) {
                cout <<"Remark: Excellent"<<endl;
                cout<<name<<", your grade is A1"<<endl;
            } else if (percentage >= 70) {
                cout <<"Remark: Very Good"<<endl;
                cout <<name<<", your grade is B2 "<<endl;
            } else if (percentage >= 60) {
                cout <<"Remark: Good"<<endl;
                cout <<name<<", your grade is B3"<<endl;
            } else if (percentage >= 55 && percentage <= 59) {
                cout <<"Remark: Credit"<<endl;
                cout <<name<<", your grade is C4"<<endl;
            } else if (percentage >= 50 && percentage <= 54) {
                cout <<"Remark: Credit"<<endl;
                cout <<name<<", your grade is C5"<<endl;
            } else if (percentage >= 45 && percentage <= 49) {
                cout <<"Remark: Credit"<<endl;
                cout <<name<<", your grade is C6"<<endl;
            } else if (percentage >= 40 && percentage <= 44) {
                cout <<"Pass"<<endl;
                cout <<name<<", your grade is D7"<<endl;
            } else if (percentage >= 35 && percentage <= 39) {
                cout <<"Remark: Pass"<<endl;
                cout <<name<<", your grade is D8"<<endl;
            } else {
                cout <<"Remark: Fail"<<endl;
                cout <<name<<", your grade is F9"<<endl;
            }

        }
        cout <<endl;
        cout <<"End Game? Type 'no' to PLAY AGAIN and 'yes' to END GAME: ";
        cin >>endGame;
    } while (endGame == "no");

    cout <<endl;
    cout <<"End of Game! Thanks for playing!";
    return 0;
}
