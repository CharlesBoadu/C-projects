#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    string name;
    cout <<"What is your name: ";
    getline(cin, name);
    cout <<endl;
    cout << "Hello " <<name<<", welcome to Snakes and Ladders Game!"<< endl;
    cout <<endl;

    //Listing the rules of the game
    cout <<"This game involves the use of a dice and player tokens."<<endl;
    cout <<"RULE 1: Each player is identified by a player token. Eg: Red, blue, green etc..."<<endl;
    cout <<"RULE 2: You can only start moving your player token once you land a roll of one."<<endl;
    cout <<"RULE 3: Each player moves forward according to the number they rolled."<<endl;
    cout <<"RULE 4: If you roll a six (6), you get an extra turn"<<endl;
    cout <<"RULE 5: If you land at the bottom of a ladder square, you move to the top of that ladder"<<endl;
    cout <<"        Also, if you land at the top or the middle of the ladder, just stay where you are."<<endl;
    cout <<"RULE 6: If you land at the top of a snake, slide to the bottom square of the snake"<<endl;
    cout <<"        Also, If you land at the bottom or middle of the snake, just stay there"<<endl;
    cout <<"RULE 7: The first player that reaches the highest square (100), wins the game!"<<endl;
    cout <<"RULE 8: If a player is close to finishing the game and rolls a number higher than 100, "<<endl;
    cout <<"        he counts to the 100th square and then moves back with the number of moves left."<<endl;
    cout <<"        This is called the 'BOUNCE BACK EFFECT!'"<<endl;

    cout <<endl;

    int playerToken;
    string playerTokenSelected, computerTokenSelected;

    //Selecting the player token
    cout <<"Player tokens available -----> 1. Red  2. Blue  3. Green  4. Yellow "<<endl;
    cout <<"Choose your player token: ";
    cin >>playerToken;


     while(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout <<"Invalid Response. Input must be an integer!"<<endl;
        cout <<endl;
        cout <<"Player tokens available -----> 1. Red  2. Blue  3. Green  4. Yellow "<<endl;
        cout <<"Choose your player token: ";
        cin >>playerToken;
     }

    if (playerToken == 1) {
        playerTokenSelected = "RED";
        computerTokenSelected = "BLUE";
        cout <<endl;
        cout <<name<<" selects "<<playerTokenSelected<<" token and Computer selects "<<computerTokenSelected<<" token."<<endl;
    } else if (playerToken == 2) {
        playerTokenSelected = "BLUE";
        computerTokenSelected = "RED";
        cout <<endl;
        cout <<name<<" selects "<<playerTokenSelected<<" token and Computer selects "<<computerTokenSelected<<" token."<<endl;
    } else if (playerToken == 3) {
        playerTokenSelected = "GREEN";
        computerTokenSelected = "YELLOW";
        cout <<endl;
        cout <<name<<" selects "<<playerTokenSelected<<" token and Computer selects "<<computerTokenSelected<<" token."<<endl;
    } else {
        playerTokenSelected = "YELLOW";
        computerTokenSelected = "GREEN";
        cout <<endl;
        cout <<name<<" selects "<<playerTokenSelected<<" token and Computer selects "<<computerTokenSelected<<" token."<<endl;
    }

    char playerDiceRoll;
    int computerPosition, playerPosition, playerDiceRollNumber, computerDiceRollNumber;
    bool playerIsWinner = false;
    bool computerIsWinner = false;
    computerPosition = 0;
    playerPosition = 0;
    string playerOnBoard, computerOnBoard;
    playerOnBoard = "no";
    computerOnBoard = "no";

    cout <<endl;
    cout <<"<------------------------------GAME STARTS! ----------------------------------->"<<endl;
    cout <<endl;

    srand(time(NULL));

    cout <<"NB: You need a roll of 1 to be on board of Game!"<<endl;
    cout <<endl;
    while (playerPosition != 100 || computerPosition != 100) {
        cout <<name<<", press 'r' to roll the dice! : ";
        cin >>playerDiceRoll;

        while (playerDiceRoll != 'r') {
            cout <<"Invalid Input"<<endl;
            cout <<name<<", press 'r' to roll the dice! : ";
            cin >>playerDiceRoll;
        }

        playerDiceRollNumber = rand() % 6;
        computerDiceRollNumber = rand() % 6;

        cout <<name<<" rolled "<<playerDiceRollNumber<<endl;
        cout <<"Computer rolled "<<computerDiceRollNumber<<endl;
        cout <<endl;


        if (playerPosition > 0 && computerPosition > 0) {
            playerPosition += playerDiceRollNumber;
            computerPosition += computerDiceRollNumber;


            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer position on board is "<<computerPosition<<endl;
            cout <<endl;
            break;
        }


        cout <<endl;


        if (playerDiceRollNumber == 1 && computerDiceRollNumber != 1) {
            cout <<"With a roll of 1, "<<name<<", is now on board of game!"<<endl;
            while (computerDiceRollNumber != 1) {
            cout <<name<<", press 'r' to roll the dice! : ";
            cin >>playerDiceRoll;

            while (playerDiceRoll != 'r') {
            cout <<"Invalid Input"<<endl;
            cout <<name<<", press 'r' to roll the dice! : ";
            cin >>playerDiceRoll;
        }


            playerDiceRollNumber = rand() % 6;
            computerDiceRollNumber = rand() % 6;
            cout <<name<<" rolled "<<playerDiceRollNumber<<endl;
            cout <<"Computer rolled "<<computerDiceRollNumber<<endl;
            cout <<endl;

            playerPosition += playerDiceRollNumber;

            if (playerPosition == 4) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" has climbed the ladder from the 4th square to the 25th Square"<<endl;
                playerPosition += 21;
            } else if (playerPosition == 13) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" has climbed the ladder from the 13th square to the 46th Square"<<endl;
                playerPosition += 33;
            } else if (playerPosition == 27) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" is bitten by a snake on the 27th square and moves down to 5th square"<<endl;
                playerPosition -= 22;
            } else if (playerPosition == 33) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" has climbed the ladder from the 33rd square to the 46th Square"<<endl;
                playerPosition += 16;
            } else if (playerPosition == 40) {
               cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" is bitten by a snake on the 40th square and moves down to 3rd square"<<endl;
               playerPosition -= 37;
            } else if (playerPosition == 42) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" has climbed the ladder from the 42nd square to the 69th Square"<<endl;
                playerPosition += 21;
            } else if (playerPosition == 43) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" is bitten by a snake on the 43rd square and moves down to 18th square"<<endl;
               playerPosition -= 25;
            } else if (playerPosition == 50) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" has climbed the ladder from the 50th square to the 69th Square"<<endl;
                playerPosition += 19;
            } else if (playerPosition == 54) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" is bitten by a snake on the 54th square and moves down to 31st square"<<endl;
               playerPosition -= 23;
            } else if (playerPosition == 62) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" has climbed the ladder from the 62nd square to the 81st Square"<<endl;
                playerPosition += 19;
            } else if (playerPosition == 66) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" is bitten by a snake on the 66th square and moves down to 45th square"<<endl;
               playerPosition -= 21;
            } else if (playerPosition == 74) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" has climbed the ladder from the 74th square to the 92nd Square"<<endl;
                playerPosition += 18;
            } else if (playerPosition == 76) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" is bitten by a snake on the 76th square and moves down to 58th square"<<endl;
               playerPosition -= 18;
            } else if (playerPosition == 89) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" is bitten by a snake on the 89th square and moves down to 53rd square"<<endl;
               playerPosition -= 36;
            } else if (playerPosition == 99) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" is bitten by a snake on the 99th square and moves down to 41st square"<<endl;
               playerPosition -= 58;
            } else {
                cout <<endl;
            }


            cout <<name<<", current position on board is "<<playerPosition<<endl;
            cout <<endl;

            if (computerDiceRollNumber == 1) {
                cout <<"Computer is also now on board of game!"<<endl;
                computerPosition += computerDiceRollNumber;
                cout <<endl;
                break;
            }
        }

        } else if (playerDiceRollNumber != 1 && computerDiceRollNumber == 1) {
            cout <<"With a roll of 1, Computer is now on board of game!"<<endl;
            cout <<endl;
            while (playerDiceRollNumber != 1) {
            cout <<name<<", press 'r' to roll the dice! : ";
            cin >>playerDiceRoll;

            while (playerDiceRoll != 'r') {
            cout <<"Invalid Input"<<endl;
            cout <<name<<", press 'r' to roll the dice! : ";
            cin >>playerDiceRoll;
        }

            playerDiceRollNumber = rand() % 6;
            computerDiceRollNumber = rand() % 6;

            cout <<name<<" rolled "<<playerDiceRollNumber<<endl;
            cout <<"Computer rolled "<<computerDiceRollNumber<<endl;
            cout <<endl;

            computerPosition += computerDiceRollNumber;
            if (computerPosition == 4) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer has climbed the ladder from the 4th square to the 25th Square"<<endl;
                computerPosition += 21;
            } else if (computerPosition == 13) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer has climbed the ladder from the 13th square to the 46th Square"<<endl;
                computerPosition += 33;
            } else if (computerPosition == 27) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer is bitten by a snake on the 27th square and moves down to 5th square"<<endl;
                computerPosition -= 22;
            } else if (computerPosition == 33) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer has climbed the ladder from the 33rd square to the 49th Square"<<endl;
                computerPosition += 16;
            } else if (computerPosition == 40) {
               cout <<"With a roll of "<<computerDiceRollNumber<<", Computer is bitten by a snake on the 40th square and moves down to 3rd square"<<endl;
               computerPosition -= 37;
            } else if (computerPosition == 42) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer has climbed the ladder from the 42nd square to the 69th Square"<<endl;
                computerPosition += 21;
            } else if (computerPosition == 43) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer is bitten by a snake on the 43rd square and moves down to 18th square"<<endl;
               computerPosition -= 25;
            } else if (computerPosition == 50) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer has climbed the ladder from the 50th square to the 69th Square"<<endl;
                computerPosition += 19;
            } else if (computerPosition == 54) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer is bitten by a snake on the 54th square and moves down to 31st square"<<endl;
               computerPosition -= 23;
            } else if (computerPosition == 62) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer has climbed the ladder from the 62nd square to the 81st Square"<<endl;
                computerPosition += 19;
            } else if (computerPosition == 66) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer is bitten by a snake on the 66th square and moves down to 45th square"<<endl;
               computerPosition -= 21;
            } else if (computerPosition == 74) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer has climbed the ladder from the 74th square to the 92nd Square"<<endl;
                computerPosition += 18;
            } else if (computerPosition == 76) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer is bitten by a snake on the 76th square and moves down to 58th square"<<endl;
               computerPosition -= 18;
            } else if (computerPosition == 89) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer is bitten by a snake on the 89th square and moves down to 53rd square"<<endl;
               computerPosition -= 36;
            } else if (computerPosition == 99) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer is bitten by a snake on the 99th square and moves down to 41st square"<<endl;
               computerPosition -= 58;
            } else {
                cout <<endl;
            }

            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
            if (playerDiceRollNumber == 1) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" is also now on board of game!"<<endl;
                playerPosition += playerDiceRollNumber;
                cout <<endl;
                break;
            }
        }

         } else if (playerDiceRollNumber == 1 && computerDiceRollNumber == 1) {
            cout <<"With a roll of "<<playerDiceRollNumber<<" each, both "<<name<<" and Computer are now on board of game!"<<endl;
            cout <<endl;

            while (playerPosition != 100 || computerPosition != 100) {
            cout <<name<<", press 'r' to roll the dice! : ";
            cin >>playerDiceRoll;

            while (playerDiceRoll != 'r') {
            cout <<"Invalid Input"<<endl;
            cout <<name<<", press 'r' to roll the dice! : ";
            cin >>playerDiceRoll;
        }

            playerDiceRollNumber = rand() % 6;
            computerDiceRollNumber = rand() % 6;

            cout <<name<<" rolled "<<playerDiceRollNumber<<endl;
            cout <<"Computer rolled "<<computerDiceRollNumber<<endl;


            //Checking bounce back effect
            if (playerPosition == 95 && playerDiceRollNumber == 6) {
                cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to 99th square"<<endl;
                playerPosition += 4;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (computerPosition == 95 && computerDiceRollNumber == 6) {
                cout <<"Roll is more than the number to reach home and so Computer bounces back to 99th square"<<endl;
                computerPosition += 4;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (playerPosition == 96 && playerDiceRollNumber == 6) {
                cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to 98th square"<<endl;
                playerPosition += 2;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (computerPosition == 96 && computerDiceRollNumber == 6) {
                cout <<"Roll is more than the number to reach home and so Computer bounces back to 98th square"<<endl;
                computerPosition += 2;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (playerPosition == 96 && playerDiceRollNumber == 5) {
                cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to 99th square"<<endl;
                playerPosition += 3;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (computerPosition == 96 && computerDiceRollNumber == 5) {
                cout <<"Roll is more than the number to reach home and so Computer bounces back to 99th square"<<endl;
                computerPosition += 3;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (playerPosition == 97 && playerDiceRollNumber == 6) {
                cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back again to 97th square"<<endl;
                playerPosition += 0;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (computerPosition == 97 && computerDiceRollNumber == 6) {
                cout <<"Roll is more than the number to reach home and so Computer bounces back again to 97th square"<<endl;
                computerPosition += 0;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (playerPosition == 97 && playerDiceRollNumber == 5) {
                cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to 98th square"<<endl;
                playerPosition += 1;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (computerPosition == 97 && computerDiceRollNumber == 5) {
                cout <<"Roll is more than the number to reach home and so Computer bounces back to 98th square"<<endl;
                computerPosition += 1;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (playerPosition == 97 && playerDiceRollNumber == 4) {
                cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to 99th square"<<endl;
                playerPosition += 2;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (computerPosition == 97 && computerDiceRollNumber == 4) {
                cout <<"Roll is more than the number to reach home and so Computer bounces back to 99th square"<<endl;
                computerPosition += 2;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (playerPosition == 98 && playerDiceRollNumber == 6) {
                cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to 96th square"<<endl;
                playerPosition -= 2;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (computerPosition == 98 && computerDiceRollNumber == 6) {
                cout <<"Roll is more than the number to reach home and so Computer bounces back to 96th square"<<endl;
                computerPosition -= 2;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (playerPosition == 98 && playerDiceRollNumber == 5) {
                cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to 97th square"<<endl;
                playerPosition -= 1;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (computerPosition == 98 && computerDiceRollNumber == 5) {
                cout <<"Roll is more than the number to reach home and so Computer bounces back to 97th square"<<endl;
                computerPosition -= 1;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (playerPosition == 98 && playerDiceRollNumber == 4) {
                cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back again to 98th square"<<endl;
                playerPosition += 0;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (computerPosition == 98 && computerDiceRollNumber == 4) {
                cout <<"Roll is more than the number to reach home and so Computer bounces back again to 98th square"<<endl;
                computerPosition += 0;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (playerPosition == 98 && playerDiceRollNumber == 3) {
                cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to 99th square"<<endl;
                playerPosition += 1;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (computerPosition == 98 && computerDiceRollNumber == 3) {
                cout <<"Roll is more than the number to reach home and so Computer bounces back to 99th square"<<endl;
                computerPosition += 1;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (playerPosition == 99 && playerDiceRollNumber == 6) {
                cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to 95th square"<<endl;
                playerPosition -= 4;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (computerPosition == 99 && computerDiceRollNumber == 6) {
                cout <<"Roll is more than the number to reach home and so Computer bounces back to 95th square"<<endl;
                computerPosition -= 4;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (playerPosition == 99 && playerDiceRollNumber == 5) {
                cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to 96th square"<<endl;
                playerPosition -= 3;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (computerPosition == 99 && computerDiceRollNumber == 5) {
                cout <<"Roll is more than the number to reach home and so Computer bounces back to 96th square"<<endl;
                computerPosition -= 3;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            }  else if (playerPosition == 99 && playerDiceRollNumber == 4) {
                cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to 97th square"<<endl;
                playerPosition -= 2;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (computerPosition == 99 && computerDiceRollNumber == 4) {
                cout <<"Roll is more than the number to reach home and so Computer bounces back to 97th square"<<endl;
                computerPosition -= 2;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (playerPosition == 99 && playerDiceRollNumber == 3) {
                cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to 98th square"<<endl;
                playerPosition -= 1;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (computerPosition == 99 && computerDiceRollNumber == 3) {
                cout <<"Roll is more than the number to reach home and so Computer bounces back to 98th square"<<endl;
                computerPosition -= 1;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (playerPosition == 99 && playerDiceRollNumber == 2) {
                cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to the same 99th square"<<endl;
                playerPosition += 0;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else if (computerPosition == 99 && computerDiceRollNumber == 2) {
                cout <<"Roll is more than the number to reach home and so Computer bounces back to the same 99th square"<<endl;
                computerPosition += 0;
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            } else {
                cout <<endl;
            }

            playerPosition += playerDiceRollNumber;
            computerPosition += computerDiceRollNumber;

            if (computerPosition == 4) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer has climbed the ladder from the 4th square to the 25th Square"<<endl;
                computerPosition += 21;
            } else if (playerPosition == 4) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" has climbed the ladder from the 4th square to the 25th Square"<<endl;
                playerPosition += 21;
            } else if (computerPosition == 13) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer has climbed the ladder from the 13th square to the 46th Square"<<endl;
                computerPosition += 33;
            } else if (playerPosition == 13) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" has climbed the ladder from the 13th square to the 46th Square"<<endl;
                playerPosition += 33;
            } else if (computerPosition == 27) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer is bitten by a snake on the 27th square and moves down to 5th square"<<endl;
                computerPosition -= 22;
            } else if (playerPosition == 27) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" has climbed the ladder from the 27th square to the 25th Square"<<endl;
                playerPosition -= 22;
            } else if (computerPosition == 33) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer has climbed the ladder from the 33rd square to the 49th Square"<<endl;
                computerPosition += 16;
            } else if (playerPosition == 33) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" has climbed the ladder from the 33rd square to the 49th Square"<<endl;
                playerPosition += 16;
            } else if (computerPosition == 40) {
               cout <<"With a roll of "<<computerDiceRollNumber<<", Computer is bitten by a snake on the 40th square and moves down to 3rd square"<<endl;
               computerPosition -= 37;
            } else if (playerPosition == 40) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" s bitten by a snake on the 40th square and moves down to 3rd square"<<endl;
                playerPosition -= 37;
            } else if (computerPosition == 42) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer has climbed the ladder from the 42nd square to the 69th Square"<<endl;
                computerPosition += 21;
            } else if (playerPosition == 42) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" has climbed the ladder from the 42nd square to the 69th Square"<<endl;
                playerPosition += 21;
            } else if (computerPosition == 43) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer is bitten by a snake on the 43rd square and moves down to 18th square"<<endl;
               computerPosition -= 25;
            } else if (playerPosition == 43) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" is bitten by a snake on the 43rd square and moves down to 18th square"<<endl;
               computerPosition -= 25;
            } else if (computerPosition == 50) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer has climbed the ladder from the 50th square to the 69th Square"<<endl;
                computerPosition += 19;
            } else if (playerPosition == 50) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" has climbed the ladder from the 50th square to the 69th Square"<<endl;
                playerPosition += 19;
            } else if (computerPosition == 54) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer is bitten by a snake on the 54th square and moves down to 31st square"<<endl;
               computerPosition -= 23;
            } else if (playerPosition == 54) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" is bitten by a snake on the 54th square and moves down to 31st square"<<endl;
               playerPosition -= 23;
            } else if (computerPosition == 62) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer has climbed the ladder from the 62nd square to the 81st Square"<<endl;
                computerPosition += 19;
            } else if (playerPosition == 62) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" has climbed the ladder from the 62nd square to the 81st Square"<<endl;
                playerPosition += 19;
            } else if (computerPosition == 66) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer is bitten by a snake on the 66th square and moves down to 45th square"<<endl;
               computerPosition -= 21;
            } else if (playerPosition == 66) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" is bitten by a snake on the 66th square and moves down to 45th square"<<endl;
               playerPosition -= 21;
            } else if (computerPosition == 74) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer has climbed the ladder from the 74th square to the 92nd Square"<<endl;
                computerPosition += 18;
            } else if (playerPosition == 74) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" has climbed the ladder from the 74th square to the 92nd Square"<<endl;
                playerPosition += 18;
            } else if (computerPosition == 76) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer is bitten by a snake on the 76th square and moves down to 58th square"<<endl;
               computerPosition -= 18;
            } else if (playerPosition == 76) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" is bitten by a snake on the 76th square and moves down to 58th square"<<endl;
               playerPosition -= 18;
            } else if (computerPosition == 89) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer is bitten by a snake on the 89th square and moves down to 53rd square"<<endl;
               computerPosition -= 36;
            } else if (playerPosition == 89) {
                cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" is bitten by a snake on the 89th square and moves down to 53rd square"<<endl;
               playerPosition -= 36;
            } else if (computerPosition == 99) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", Computer is bitten by a snake on the 99th square and moves down to 41st square"<<endl;
               computerPosition -= 58;
            } else if (playerPosition == 99) {
                cout <<"With a roll of "<<computerDiceRollNumber<<", "<<name<<" is bitten by a snake on the 99th square and moves down to 41st square"<<endl;
               playerPosition -= 58;
            } else if (playerPosition == 100) {
                cout <<"Congratulations!"<<name<<" has reached home!"<<endl;
                playerIsWinner = true;
                break;
            } else if (computerPosition == 100) {
                cout <<"Congratulations! Computer has reached home!"<<endl;
                computerIsWinner = true;
                break;
            } else {
                cout <<name<<" position on board is "<<playerPosition<<endl;
                cout <<"Computer's position on board is "<<computerPosition<<endl;
                cout <<endl;
            }




    }
}
}


    //Second end of game loop
    while (playerPosition != 100 || computerPosition != 100) {
        if (playerIsWinner) {
            break;
        } else if (computerIsWinner) {
            break;
        } else {
            cout <<endl;
        }
        cout <<name<<", press 'r' to roll the dice! : ";
        cin >>playerDiceRoll;

        while (playerDiceRoll != 'r') {
            cout <<"Invalid Input"<<endl;
            cout <<name<<", press 'r' to roll the dice! : ";
            cin >>playerDiceRoll;
        }

        playerDiceRollNumber = rand() % 6;
        computerDiceRollNumber = rand() % 6;

        cout <<endl;

        cout <<name<<" rolled "<<playerDiceRollNumber<<endl;
        cout <<"Computer rolled "<<computerDiceRollNumber<<endl;
        cout <<endl;

        //Checking bounce back effect
        if (playerPosition == 95 && playerDiceRollNumber == 6) {
            cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to 99th square"<<endl;
            playerPosition += 4;
            computerPosition += computerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 95 && computerDiceRollNumber == 6) {
            cout <<"Roll is more than the number to reach home and so Computer bounces back to 99th square"<<endl;
            computerPosition += 4;
            playerPosition += playerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 96 && playerDiceRollNumber == 6) {
            cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to 98th square"<<endl;
            playerPosition += 2;
            computerPosition += computerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 96 && computerDiceRollNumber == 6) {
            cout <<"Roll is more than the number to reach home and so Computer bounces back to 98th square"<<endl;
            computerPosition += 2;
            playerPosition += playerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 96 && playerDiceRollNumber == 5) {
            cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to 99th square"<<endl;
            playerPosition += 3;
            computerPosition += computerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 96 && computerDiceRollNumber == 5) {
            cout <<"Roll is more than the number to reach home and so Computer bounces back to 99th square"<<endl;
            computerPosition += 3;
            playerPosition += playerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 97 && playerDiceRollNumber == 6) {
            cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back again to 97th square"<<endl;
            playerPosition += 0;
            computerPosition += computerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 97 && computerDiceRollNumber == 6) {
            cout <<"Roll is more than the number to reach home and so Computer bounces back again to 97th square"<<endl;
            computerPosition += 0;
            playerPosition += playerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 97 && playerDiceRollNumber == 5) {
            cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to 98th square"<<endl;
            playerPosition += 1;
            computerPosition += computerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 97 && computerDiceRollNumber == 5) {
            cout <<"Roll is more than the number to reach home and so Computer bounces back to 98th square"<<endl;
            computerPosition += 1;
            playerPosition += playerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 97 && playerDiceRollNumber == 4) {
            cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to 99th square"<<endl;
            playerPosition += 2;
            computerPosition += computerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 97 && computerDiceRollNumber == 4) {
            cout <<"Roll is more than the number to reach home and so Computer bounces back to 99th square"<<endl;
            computerPosition += 2;
            playerPosition += playerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 98 && playerDiceRollNumber == 6) {
            cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to 96th square"<<endl;
            playerPosition -= 2;
            computerPosition += computerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 98 && computerDiceRollNumber == 6) {
            cout <<"Roll is more than the number to reach home and so Computer bounces back to 96th square"<<endl;
            computerPosition -= 2;
            playerPosition += playerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 98 && playerDiceRollNumber == 5) {
            cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to 97th square"<<endl;
            playerPosition -= 1;
            computerPosition += computerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 98 && computerDiceRollNumber == 5) {
            cout <<"Roll is more than the number to reach home and so Computer bounces back to 97th square"<<endl;
            computerPosition -= 1;
            playerPosition += playerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 98 && playerDiceRollNumber == 4) {
            cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back again to 98th square"<<endl;
            playerPosition += 0;
            computerPosition += computerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 98 && computerDiceRollNumber == 4) {
            cout <<"Roll is more than the number to reach home and so Computer bounces back again to 98th square"<<endl;
            computerPosition += 0;
            playerPosition += playerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 98 && playerDiceRollNumber == 3) {
            cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to 99th square"<<endl;
            playerPosition += 1;
            computerPosition += computerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 98 && computerDiceRollNumber == 3) {
            cout <<"Roll is more than the number to reach home and so Computer bounces back to 99th square"<<endl;
            computerPosition += 1;
            playerPosition += playerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 99 && playerDiceRollNumber == 6) {
            cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to 95th square"<<endl;
            playerPosition -= 4;
            computerPosition += computerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 99 && computerDiceRollNumber == 6) {
            cout <<"Roll is more than the number to reach home and so Computer bounces back to 95th square"<<endl;
            computerPosition -= 4;
            playerPosition += playerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 99 && playerDiceRollNumber == 5) {
            cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to 96th square"<<endl;
            playerPosition -= 3;
            computerPosition += computerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 99 && computerDiceRollNumber == 5) {
            cout <<"Roll is more than the number to reach home and so Computer bounces back to 96th square"<<endl;
            computerPosition -= 3;
            playerPosition += playerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        }  else if (playerPosition == 99 && playerDiceRollNumber == 4) {
            cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to 97th square"<<endl;
            playerPosition -= 2;
            computerPosition += computerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 99 && computerDiceRollNumber == 4) {
            cout <<"Roll is more than the number to reach home and so Computer bounces back to 97th square"<<endl;
            computerPosition -= 2;
            playerPosition += playerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 99 && playerDiceRollNumber == 3) {
            cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to 98th square"<<endl;
            playerPosition -= 1;
            computerPosition += computerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 99 && computerDiceRollNumber == 3) {
            cout <<"Roll is more than the number to reach home and so Computer bounces back to 98th square"<<endl;
            computerPosition -= 1;
            playerPosition += playerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 99 && playerDiceRollNumber == 2) {
            cout <<"Roll is more than the number to reach home and so "<<name<<" bounces back to the same 99th square"<<endl;
            playerPosition += 0;
            computerPosition += computerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 99 && computerDiceRollNumber == 2) {
            cout <<"Roll is more than the number to reach home and so Computer bounces back to the same 99th square"<<endl;
            computerPosition += 0;
            playerPosition += playerDiceRollNumber;
            cout <<name<<" position on board is "<<playerPosition<<endl;
            cout <<"Computer's position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 100) {
            cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
            cout <<"Congratulations!"<<name<<" has reached home!"<<endl;
            break;
        } else if (computerPosition == 100) {
            cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
            cout <<"Congratulations! Computer has reached home!"<<endl;
            break;
        } else {
            computerPosition += computerDiceRollNumber;
            playerPosition += playerDiceRollNumber;
        }


        //Check if player or computer climbs ladder or is bitten by snake
        if (computerPosition == 4) {
            cout <<"With a roll of "<<computerDiceRollNumber<<", Computer has climbed the ladder from the 4th square to the 25th Square"<<endl;
            computerPosition += 21;
            cout <<endl;
            cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 4) {
            cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" has climbed the ladder from the 4th square to the 25th Square"<<endl;
            playerPosition += 21;
            cout <<endl;
            cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 13) {
            cout <<"With a roll of "<<computerDiceRollNumber<<", Computer has climbed the ladder from the 13th square to the 46th Square"<<endl;
            computerPosition += 33;
            cout <<endl;
            cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 13) {
            cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" has climbed the ladder from the 13th square to the 46th Square"<<endl;
            playerPosition += 33;
            cout <<endl;
            cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 27) {
            cout <<"With a roll of "<<computerDiceRollNumber<<", Computer is bitten by a snake on the 27th square and moves down to 5th square"<<endl;
            computerPosition -= 22;
            cout <<endl;
            cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 27) {
            cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" has climbed the ladder from the 27th  square to the 25th Square"<<endl;
            playerPosition -= 22;
            cout <<endl;
            cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 33) {
            cout <<"With a roll of "<<computerDiceRollNumber<<", Computer has climbed the ladder from the 33rd square to the 46th Square"<<endl;
            computerPosition += 16;
            cout <<endl;
            cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 33) {
            cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" has climbed the ladder from the 33rd square to the 46th Square"<<endl;
            playerPosition += 16;
            cout <<endl;
            cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 40) {
           cout <<"With a roll of "<<computerDiceRollNumber<<", Computer is bitten by a snake on the 40th square and moves down to 3rd square"<<endl;
           computerPosition -= 37;
           cout <<endl;
           cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 40) {
            cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" is bitten by a snake on the 40th square and moves down to 3rd square"<<endl;
            playerPosition -= 37;
            cout <<endl;
            cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 42) {
            cout <<"With a roll of "<<computerDiceRollNumber<<", Computer has climbed the ladder from the 42nd square to the 63rd Square"<<endl;
            computerPosition += 21;
            cout <<endl;
            cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 42) {
            cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" has climbed the ladder from the 42nd square to the 63rd Square"<<endl;
            playerPosition += 21;
            cout <<endl;
            cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 43) {
            cout <<"With a roll of "<<computerDiceRollNumber<<", Computer is bitten by a snake on the 43rd square and moves down to 18th square"<<endl;
           computerPosition -= 25;
           cout <<endl;
           cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 43) {
            cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" is bitten by a snake on the 43rd square and moves down to 18th square"<<endl;
           playerPosition -= 25;
           cout <<endl;
           cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 50) {
            cout <<"With a roll of "<<computerDiceRollNumber<<", Computer has climbed the ladder from the 50th square to the 69th Square"<<endl;
            computerPosition += 19;
            cout <<endl;
            cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 50) {
            cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" has climbed the ladder from the 50th square to the 69th Square"<<endl;
            playerPosition += 19;
            cout <<endl;
            cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 54) {
            cout <<"With a roll of "<<computerDiceRollNumber<<", Computer is bitten by a snake on the 54th square and moves down to 31st square"<<endl;
           computerPosition -= 23;
           cout <<endl;
           cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 54) {
            cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" is bitten by a snake on the 54th square and moves down to 31st square"<<endl;
           playerPosition -= 23;
           cout <<endl;
           cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 62) {
            cout <<"With a roll of "<<computerDiceRollNumber<<", Computer has climbed the ladder from the 62nd square to the 81st Square"<<endl;
            computerPosition += 19;
            cout <<endl;
            cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 62) {
            cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" has climbed the ladder from the 62nd square to the 81st Square"<<endl;
            playerPosition += 19;
            cout <<endl;
            cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 66) {
            cout <<"With a roll of "<<computerDiceRollNumber<<", Computer is bitten by a snake on the 66th square and moves down to 45th square"<<endl;
           computerPosition -= 21;
           cout <<endl;
           cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 66) {
            cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" is bitten by a snake on the 66th square and moves down to 45th square"<<endl;
           playerPosition -= 21;
           cout <<endl;
           cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 74) {
            cout <<"With a roll of "<<computerDiceRollNumber<<", Computer has climbed the ladder from the 74th square to the 92nd Square"<<endl;
            computerPosition += 18;
            cout <<endl;
            cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 74) {
            cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" has climbed the ladder from the 74th square to the 92nd Square"<<endl;
            playerPosition += 18;
            cout <<endl;
            cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 76) {
            cout <<"With a roll of "<<computerDiceRollNumber<<", Computer is bitten by a snake on the 76th square and moves down to 58th square"<<endl;
           computerPosition -= 18;
           cout <<endl;
           cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 76) {
            cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" is bitten by a snake on the 76th square and moves down to 58th square"<<endl;
           playerPosition -= 18;
           cout <<endl;
           cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 89) {
            cout <<"With a roll of "<<computerDiceRollNumber<<", Computer is bitten by a snake on the 89th square and moves down to 53rd square"<<endl;
           computerPosition -= 36;
           cout <<endl;
           cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 89) {
            cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" is bitten by a snake on the 89th square and moves down to 53rd square"<<endl;
           playerPosition -= 36;
           cout <<endl;
           cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (computerPosition == 99) {
            cout <<"With a roll of "<<computerDiceRollNumber<<", Computer is bitten by a snake on the 99th square and moves down to 41st square"<<endl;
           computerPosition -= 58;
           cout <<endl;
            cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 99) {
            cout <<"With a roll of "<<playerDiceRollNumber<<", "<<name<<" is bitten by a snake on the 99th square and moves down to 41st square"<<endl;
           playerPosition -= 58;
           cout <<endl;
            cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        } else if (playerPosition == 100) {
            cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
            cout <<"Congratulations!"<<name<<"has reached home!"<<endl;
            break;
        } else if (computerPosition == 100) {
            cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
            cout <<"Congratulations! Computer has reached home!"<<endl;
            break;
        } else {
            cout <<endl;
            cout <<name<<" current position on board is "<<playerPosition<<endl;
            cout <<"Computer's current position on board is "<<computerPosition<<endl;
            cout <<endl;
        }


}

    if (playerPosition == 100) {
        cout <<"Game Over!"<<name<<" is the winner!"<<endl;
    } else {
        cout <<"Game Over! Computer is the winner!"<<endl;
    }
    return 0;
}
