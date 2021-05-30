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
    cout <<"Select your player token -----> 1. Red  2. Blue  3. Green  4. Yellow "<<endl;
    cout <<"Choose your player token: ";
    cin >>playerToken;


     while(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout <<"Invalid Response. Input must be an integer!"<<endl;
        cout <<endl;
        cout <<"Select your player token -----> 1. Red  2. Blue  3. Green  4. Yellow "<<endl;
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

    char playerDiceRoll, computerDiceRoll;
    cout <<"<============================= GAME STARTS! ===========================================>"<<endl;
    cout <<endl;

    cout <<name<<", press 'r' to roll the dice! : ";
    cin >>playerDiceRoll;

    while (playerDiceRoll != 'r') {
        cout <<"Invalid Input"<<endl;
        cout <<name<<", press 'r' to roll the dice! : ";
        cin >>playerDiceRoll;
    }

    srand(time(NULL));
    playerDiceRoll = rand() % 6;
    computerDiceRoll = rand() % 6;
    int computerPosition;


    while (playerDiceRoll != 1) {
        computerDiceRoll = rand() % 6;

        if (computerDiceRoll == 1) {
        cout <<"Computer is now on the board of game"<<endl;
        computerPosition = 1;
    }
    }

    if (playerDiceRoll == 1) {
        cout <<name<<" is now on the board of game"<<endl;
    }


    return 0;
}
