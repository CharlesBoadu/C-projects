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

    string playerResponse, computerMove, endGame;
    int computerMoveNumber, playerScore, ComputerScore, rounds;
    playerScore = 0;
    ComputerScore = 0;
    rounds = 1;
    string computerMoves [3] = {"rock", "paper", "scissor"};
    srand(time(NULL));
    endGame = "no";

    cout <<"----------------------ROUND "<<rounds<<". GAME START!----------------------------------"<<endl;
    //Loop for playing rounds of a play five times
    int i = 0;
    while (i < 5) {
        cout <<"Rock-Paper-Scissor. Choose one: ";
        cin >>playerResponse;

        //converting player response to lowercase
        for_each (playerResponse.begin(), playerResponse.end(), [](char & c){
           c = tolower(c);
        });

        computerMoveNumber = rand() % 3;
        computerMove = computerMoves[computerMoveNumber];
        cout <<"Computer chose "<<computerMove<<endl;

        //Determining who wins the round
        if (playerResponse == "paper" && computerMove == "scissor") {
            cout <<"scissor cuts paper. Computer scores 1 point!"<<endl;
            ComputerScore += 1;
            i++;
            cout <<endl;
        } else if (playerResponse == "scissor" && computerMove == "paper") {
            cout <<"scissor cuts paper. "<<name<<" scores 1 point!"<<endl;
            playerScore += 1;
            i++;
            cout <<endl;
        } else if (playerResponse == "rock" && computerMove == "scissor") {
            cout <<"rock crushes scissor. "<<name<<" scores 1 point!"<<endl;
            playerScore += 1;
            i++;
            cout <<endl;
        } else if (playerResponse == "scissor" && computerMove == "rock") {
            cout <<"rock crushes scissor. Computer scores 1 point!"<<endl;
            ComputerScore += 1;
            i++;
            cout <<endl;
        } else if (playerResponse == "paper" && computerMove == "rock") {
            cout <<"Paper covers rock. "<<name<<" scores 1 point!"<<endl;
            playerScore += 1;
            i++;
            cout <<endl;
        } else if (playerResponse == "rock" && computerMove == "paper") {
            cout <<"Paper covers rock. Computer scores 1 point!"<<endl;
            ComputerScore += 1;
            i++;
            cout <<endl;
        } else if (playerResponse == "rock" && computerMove == "rock") {
            cout <<"Both chose same. No points awarded!"<<endl;
            i++;
            cout <<endl;
        } else if (playerResponse == "paper" && computerMove == "paper") {
            cout <<"Both chose same. No points awarded!"<<endl;
            i++;
            cout <<endl;
        } else if (playerResponse == "scissor" && computerMove == "scissor") {
            cout <<"Both chose same. No points awarded!"<<endl;
            i++;
            cout <<endl;
        } else {
            cout <<"Invalid response by player"<<endl;
            i += 0;
            cout <<endl;
        }
}

    //Displaying of scores
    cout <<"End of game!"<<endl;
    cout <<endl;
    cout <<name<<" Score: "<<playerScore<<" and \tComputer Score: "<<ComputerScore;
    cout <<endl;

    //Determining who won
    if (playerScore > ComputerScore) {
        cout <<name<<" wins!"<<endl;
    } else if (playerScore == ComputerScore) {
        cout <<"This round is a tie!"<<endl;
    } else {
        cout <<"Computer wins!"<<endl;
    }

    do {
        cout <<endl;
        cout <<"Do you want to end game?\nType 'yes' to stop game and 'no' to continue game: ";
        cin >>endGame;

        if (endGame == "yes") {
            break;
        } else {
            rounds += 1;
            playerScore = 0;
            ComputerScore = 0;
            cout <<endl;
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
                i++;
                cout <<endl;
            } else if (playerResponse == "paper" && computerMove == "paper") {
                cout <<"Both chose same. No points awarded!"<<endl;
                i++;
                cout <<endl;
            } else if (playerResponse == "scissor" && computerMove == "scissor") {
                cout <<"Both chose same. No points awarded!"<<endl;
                i++;
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
    } else if (playerScore == ComputerScore) {
        cout <<"This round is a tie!"<<endl;
    } else {
        cout <<"Computer wins!"<<endl;
    }
    } while (endGame == "no");

    cout<<endl;
    cout <<"Thanks for playing Rock-Paper-Scissor Game!\nGoodbye!";

    return 0;
}
