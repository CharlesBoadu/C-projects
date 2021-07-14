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

    cout <<"---------> Hello "<<name<<", welcome to Rock-Paper-Scissor game!\n---------> In this game, you alternate between the selection of rock, paper and scissor.\n---------> Each selection has an outcome of a victory or defeat.\n---------> Eg: Scissor cuts paper and so scissor wins over paper. Enjoy!!!"<<endl;
    cout <<endl;

    string playerResponse, computerMove, playAgain;
    int computerMoveNumber, playerScore, ComputerScore, rounds, playerWins, computerWins;
    playerScore = 0;
    ComputerScore = 0;
    playerWins = 0;
    computerWins = 0;
    rounds = 0;
    string computerMoves [3] = {"rock", "paper", "scissor"};
    srand(time(NULL));
    playAgain = "yes";

    do {
        if (playAgain == "no") {
            break;
        } else {
            rounds += 1;
            playerScore = 0;
            ComputerScore = 0;
            cout <<endl;
            if (rounds > 1) {
                cout <<"Number of rounds won => "<<name<<": "<<playerWins<<" and \tComputer: "<<computerWins<<endl;
                cout <<endl;
            }

            cout <<"----------------------ROUND "<<rounds<<". GAME START!----------------------------------"<<endl;
            for (int i = 0; i < 5; i++) {
            cout <<"Rock-Paper-Scissor. Choose one: ";
            cin >>playerResponse;

            //converting player response to lowercase
            for_each (playerResponse.begin(), playerResponse.end(), [](char & c){
               c = tolower(c);
            });

            computerMoveNumber = rand() % 3;
            computerMove = computerMoves[computerMoveNumber];
            cout <<"Computer chose "<<computerMove<<endl;

            //Determine who wins the round
            if (playerResponse == "paper" && computerMove == "scissor") {
                cout <<"scissor cuts paper. Computer scores 1 point!"<<endl;
                ComputerScore += 1;
                cout <<endl;
            } else if (playerResponse == "scissor" && computerMove == "paper") {
                cout <<"scissor cuts paper. "<<name<<" scores 1 point!"<<endl;
                playerScore += 1;
                cout <<endl;
            } else if (playerResponse == "rock" && computerMove == "scissor") {
                cout <<"rock crushes scissor. "<<name<<" scores 1 point!"<<endl;
                playerScore += 1;
                cout <<endl;
            } else if (playerResponse == "scissor" && computerMove == "rock") {
                cout <<"rock crushes scissor. Computer scores 1 point!"<<endl;
                ComputerScore += 1;
                cout <<endl;
            } else if (playerResponse == "paper" && computerMove == "rock") {
                cout <<"Paper covers rock. "<<name<<" scores 1 point!"<<endl;
                playerScore += 1;
                cout <<endl;
            } else if (playerResponse == "rock" && computerMove == "paper") {
                cout <<"Paper covers rock. Computer scores 1 point!"<<endl;
                ComputerScore += 1;
                cout <<endl;
            } else if (playerResponse == "rock" && computerMove == "rock") {
                cout <<"Both chose same. No points awarded!"<<endl;
                i--;
                cout <<endl;
            } else if (playerResponse == "paper" && computerMove == "paper") {
                cout <<"Both chose same. No points awarded!"<<endl;
                i--;
                cout <<endl;
            } else if (playerResponse == "scissor" && computerMove == "scissor") {
                cout <<"Both chose same. No points awarded!"<<endl;
                i--;
                cout <<endl;
            } else {
                cout <<"Invalid response by player"<<endl;
                i--;
                cout <<endl;
            }
        }
    }
    cout <<"End of game!"<<endl;
    cout <<endl;
    cout <<name<<" Score: "<<playerScore<<"\t and \tComputer Score: "<<ComputerScore;
    cout <<endl;

    if (playerScore > ComputerScore) {
        cout <<name<<" wins!"<<endl;
        playerWins += 1;
    } else if (playerScore == ComputerScore) {
        cout <<"This round is a tie!"<<endl;
        playerWins += 1;
        computerWins += 1;
    } else {
        cout <<"Computer wins!"<<endl;
        computerWins += 1;
    }

        cout <<endl;
        cout <<"Play Again?\nType 'yes' to Play Again and 'no' to end game: ";
        cin >>playAgain;
    } while (playAgain == "yes");

    if (playerWins > computerWins) {
        cout<<endl;
        cout<<name<<" is the overall winner!"<<endl;
    } else if (computerWins > playerWins) {
        cout<<endl;
        cout <<"Computer is the overall winner!"<<endl;
    } else {
        cout<<endl;
        cout<<"This game of rock-paper-scissor was a tie!"<<endl;
    }

    cout<<endl;
    cout <<"Thanks for playing Rock-Paper-Scissor Game!\nGoodbye!";

    return 0;
}
