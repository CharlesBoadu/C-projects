#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

using namespace std;

int main()
{
    string player, name;

    cout <<"What is your name, player: ";
    getline(cin, name);
    cout <<endl;

    cout <<"Hello "<<name<<", welcome to Rock-Paper-Scissor game!\nIn this game, you alternate between the selection of rock, paper and scissor\nEach selection has an outcome of a victory or defeat.\nEg: Scissor cuts paper and so scissor wins over paper. Enjoy!!!"<<endl;
    cout <<endl;

    string playerResponse, computerMove;
    int computerMoveNumber, playerScore, ComputerScore;
    playerScore = 0;
    ComputerScore = 0;
    string computerMoves [3] = {"rock", "paper", "scissor"};
    srand(time(NULL));

    //Loop for playing rounds of a play five times
    for(int i = 0; i < 5; i++) {
        cout <<"Rock-Paper-Scissor. Choose one: ";
        cin >>playerResponse;

        //converting player response to lowercase
        for_each (playerResponse.begin(), playerResponse.end(), [](char & c){
           c = tolower(c);
        });

        int computerMoveNumber = rand() % 3;
        computerMove = computerMoves[computerMoveNumber];
        cout <<"Computer chose "<<computerMove<<endl;

        //Determine who wins the round
        if (playerResponse == "paper" && computerMove == "scissor") {
            cout <<"scissor cuts paper. Computer scores 1 point!"<<endl;
            ComputerScore += 1;
            cout <<endl;
        } else if (playerResponse == "scissor" && computerMove == "paper") {
            cout <<"scissor cuts paper. Player scores 1 point!"<<endl;
            playerScore += 1;
            cout <<endl;
        } else if (playerResponse == "rock" && computerMove == "scissor") {
            cout <<"rock crushes scissor. Player scores 1 point!"<<endl;
            playerScore += 1;
            cout <<endl;
        } else if (playerResponse == "scissor" && computerMove == "rock") {
            cout <<"rock crushes scissor. Computer scores 1 point!"<<endl;
            ComputerScore += 1;
            cout <<endl;
        } else if (playerResponse == "paper" && computerMove == "rock") {
            cout <<"Paper covers rock. Player scores 1 point!"<<endl;
            playerScore += 1;
            cout <<endl;
        } else if (playerResponse == "rock" && computerMove == "paper") {
            cout <<"Paper covers rock. Computer scores 1 point!"<<endl;
            ComputerScore += 1;
            cout <<endl;
        } else {
            cout <<"Both player and computer chose the same"<<endl;
            cout<<"One point each"<<endl;
            playerScore += 1;
            ComputerScore += 1;
            cout <<endl;
        }
    }

    cout <<"End of game!"<<endl;
    cout <<endl;
    cout <<"Player Score: "<<playerScore<<"\t and \tComputer Score: "<<ComputerScore;
    cout <<endl;

    //Determining who won
    if (playerScore > ComputerScore) {
        cout <<name<<" wins!"<<endl;
    } else {
        cout <<"Computer wins!"<<endl;
    }

    return 0;
}
