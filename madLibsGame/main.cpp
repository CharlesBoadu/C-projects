#include <iostream>
#include <algorithm>

using namespace std;

void scoobyDooMadlibs (string name1, string name2, string name3, string name4, string name5, string name6, string name7, string animal1, string animal2, string noun, string adjective) {
    cout <<"<-----------------------------SCOOBY DOO STORY MADLIB --------------------------------------------->"<<endl;
    cout <<endl;
    cout <<"'Scoob!' reveals how lifelong friends __"<<name1<<"__ and __"<<name2<<"__ "<<endl;
    cout <<"first met and how they joined with young detectives __"<<name3<<"__, __"<<name4<<"__ and __"<<name5<<"__"<<endl;
    cout <<" to form the famous Mystery Inc. Now, with hundreds of cases solved and adventures shared,"<<endl;
    cout <<"__"<<name6<<"__ and the gang face their biggest, most challenging mystery ever:"<<endl;
    cout <<"A plot to unleash the ghost __"<<animal1<<"__ __"<<name7<<"__ upon the world. As they race to"<<endl;
    cout <<"stop the global '__"<<animal2<<"__pocalypse, 'The gang discovers that scooby has a secret "<<endl;
    cout <<"__"<<noun<<"__ and A(n) __"<<adjective<<"__ destiny greater than anyone imagined."<<endl;
}

void halloweenMadlibs (string holiday1, string holiday2, int number1, int number2, string noun1, string noun2, string noun3, string verb, string place, string food1, string food2,  string food3, string food4, string person, string adjective1, string adjective2, string adjective3, string pluralNoun1, string pluralNoun2, string bodyPart, string bodyPartPlural, string famousPerson, string familyMember) {
    cout <<"<-----------------------------HALLOWEEN STORY MADLIB --------------------------------------------->"<<endl;
    cout <<endl;
    cout <<"I can't believe its already __"<<holiday1<<"__! I can't wait to put on my __"<<noun1<<"__"<<endl;
    cout <<"and visit every __"<<place<<"__ in my neighborhood. This year, I am going to dress up as (a)"<<endl;
    cout <<"__"<<person<<"__ with .."<<adjective1<<"__ "<<bodyPartPlural<<"__ Before I"<<endl;
    cout <<"__"<<verb<<"__, I make sure to grab my __"<<adjective2<<"__ "<<noun2<<"__ to hold all of my"<<endl;
    cout <<"__"<<food1<<"__ Finally, all of my __"<<pluralNoun1<<"__ are ready to go! When __"<<famousPerson<<"__"<<endl;
    cout <<"answers the door, I say, '__"<<noun3<<"__ or treat! Yum! I got (a) __"<<food2<<"__ and (a) __"<<food3<<"__ We"<<endl;
    cout <<"visit __"<<number1<<"__ houses and decide it's time to __"<<verb<<"__ home. My __"<<familyMember<<"__ says"<<endl;
    cout <<" if I eat too much __"<<food4<<"__, __"<<bodyPart<<"__ will hurt, so I'll eat just __"<<number2<<"__ pieces and"<<endl;
    cout <<"go straight to bed. I hope I'll have __"<<adjective3<<"__ dreams of __"<<pluralNoun2<<"tonight!"<<endl;
    cout <<"Happy __"<<holiday2<<"__!"<<endl;
}

void bibleStoryMadlibs (string objectPlural, string object, string food, string place, string event, string bug, string animal, string action1, string action2, string action3) {
    cout <<"<-----------------------------BIBLE STORY MADLIB --------------------------------------------->"<<endl;
    cout <<endl;
    cout <<"Jesus once told a story about a boy and his father."<<endl;
    cout <<"The boy came to his father one day and said, 'Give me all the __"<<object<<"__"<<endl;
    cout <<"that belongs to me.' Right after that, the boy gathered all his __"<<objectPlural<<"__ and left."<<endl;
    cout <<"The boy moved to __"<<place<<"__ and spent all his money on __"<<food<<"__ and __"<<event<<"__."<<endl;
    cout <<"When the boy realized he was out of money, he tried to find work of a __"<<animal<<"__ farm."<<endl;
    cout <<"The boy was so hungry that he would have eaten a __"<<bug<<"__!"<<endl;
    cout <<"While the boy was at work one day, he realized that his father's servants lived better than him."<<endl;
    cout <<"The boy knew he had done wrong so he decided to ask his father for forgiveness."<<endl;
    cout <<"The boy __"<<action1<<"__ to his dad's house."<<endl;
    cout <<"As soon as the father saw the boy, he __"<<action2<<"__ to him."<<endl;
    cout <<"The boy said, 'I am sorry father. I was wrong for taking your money. Please forgive me."<<endl;
    cout <<"The father __"<<action3<<"__ the boy and said, 'Of course I will forgive you!"<<endl;
}

int main()
{
    string name, endGame;
    endGame = "no";
    int storyNum;
    cout <<"What is your name: ";
    getline(cin, name);


    do {
    cout <<endl;
    cout <<"Hello again! "<<name<<", welcome to Madlibs Game!"<<endl;
    cout <<endl;

    cout <<"<----------------------MADLIBS STORIES AVAILABLE ----------------------------->"<<endl;
    cout <<"1. <--> Scooby Doo Madlibs <-->"<<endl;
    cout <<"2. <--> Halloween Madlibs <-->"<<endl;
    cout <<"3. <--> Bible story Madlibs <-->"<<endl;

    cout <<endl;
    cout <<"Select a number to play the Madlib of that story. Enjoy!\t";
    cout <<"Choose story: ";
    cin >>storyNum;
    cout <<endl;


    if (endGame == "yes") {
        break;
    } else {

        while(cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout <<"Invalid Response. Input must be a number!"<<endl;
            cout <<"Select a number to play the Madlib of that story. Enjoy!\t";
            cout <<"Choose story: ";
            cin >>storyNum;
            cout <<endl;
        }

        if (storyNum == 1) {
            string name1, name2, name3, name4, name5, name6, name7, animal1, animal2,  noun, adjective;
            cout <<"<-----------------------------SCOOBY DOO STORY MADLIB --------------------------------------------->"<<endl;
            cout <<"Enter a name: ";
            cin >>name1;
            cout <<"Enter a name: ";
            cin >>name2;
            cout <<"Enter a name: ";
            cin >>name3;
            cout <<"Enter a name: ";
            cin >>name4;
            cout <<"Enter a name: ";
            cin >>name5;
            cout <<"Enter a name: ";
            cin >>name6;
            cout <<"Enter a name: ";
            cin >>name7;
            cout <<"Enter an animal: ";
            cin >>animal1;
            cout <<"Enter an animal: ";
            cin >>animal2;
            cout <<"Enter a noun: ";
            cin >>noun;
            cout <<"Enter an adjective: ";
            cin >>adjective;
            cout <<endl;
            scoobyDooMadlibs(name1, name2, name3, name4, name5, name6, name7, animal1, animal2, noun, adjective);
        } else if (storyNum == 2) {
            string holiday1, holiday2, noun1, noun2, noun3, verb, place, food1, food2,  food3, food4, person, adjective1, adjective2, adjective3, pluralNoun1, pluralNoun2, bodyPart, bodyPartPlural, famousPerson, familyMember;
            int number1, number2;
            cout <<"<-----------------------------HALLOWEEN STORY MADLIB --------------------------------------------->"<<endl;
            cout <<"Enter a holiday: ";
            cin >>holiday1;
            cout <<"Enter a holiday: ";
            cin >>holiday2;
            cout <<"Enter a noun: ";
            cin >>noun1;
            cout <<"Enter a number: ";
            cin >>number1;
            cout <<"Enter a number: ";
            cin >>number2;
            cout <<"Enter a noun: ";
            cin >>noun2;
            cout <<"Enter a noun: ";
            cin >>noun3;
            cout <<"Enter a verb: ";
            cin >>verb;
            cout <<"Enter a place: ";
            cin >>place;
            cout <<"Enter a food: ";
            cin >>food1;
            cout <<"Enter a food: ";
            cin >>food2;
            cout <<"Enter a food: ";
            cin >>food3;
            cout <<"Enter a food: ";
            cin >>food4;
            cout <<"Enter a person: ";
            cin >>person;
            cout <<"Enter an adjective: ";
            cin >>adjective1;
            cout <<"Enter an adjective: ";
            cin >>adjective2;
            cout <<"Enter an adjective: ";
            cin >>adjective3;
            cout <<"Enter a plural Noun: ";
            cin >>pluralNoun1;
            cout <<"Enter a plural Noun: ";
            cin >>pluralNoun2;
            cout <<"Enter a body part: ";
            cin >>bodyPart;
            cout <<"Enter a body part (plural): ";
            cin >>bodyPartPlural;
            cout <<"Enter a famous Person: ";
            cin >>famousPerson;
            cout <<"Enter a family member: ";
            cin >>familyMember;
            cout <<endl;
            halloweenMadlibs(holiday1, holiday2, number1, number2, noun1, noun2, noun3, verb, place, food1, food2,  food3, food4, person, adjective1, adjective2, adjective3, pluralNoun1, pluralNoun2, bodyPart, bodyPartPlural, famousPerson, familyMember);
        } else if (storyNum == 3) {
            string objectPlural, object, food, place, event, bug, animal, action1, action2, action3;
            cout <<"<-----------------------------BIBLE STORY MADLIB --------------------------------------------->"<<endl;
            cout <<"Enter an object (plural): ";
            cin >>objectPlural;
            cout <<"Enter an object: ";
            cin >>object;
            cout <<"Enter a food: ";
            cin >>food;
            cout <<"Enter a place: ";
            cin >>place;
            cout <<"Enter an event: ";
            cin >>event;
            cout <<"Enter a bug: ";
            cin >>bug;
            cout <<"Enter an animal: ";
            cin >>animal;
            cout <<"Enter an action: ";
            cin >>action1;
            cout <<"Enter an action: ";
            cin >>action2;
            cout <<"Enter an action: ";
            cin >>action3;
            cout <<endl;
            bibleStoryMadlibs(objectPlural, object, food, place, event, bug, animal, action1, action2, action3);
    }
  }

    cout <<endl;
    cout <<"END GAME? Type 'yes' to END GAME and 'no' to play another Madlibs Story: ";
    cin >>endGame;
    } while (endGame == "no");

    cout <<"Thanks for playing Madlibs! Goodbye!";
    return 0;
}

