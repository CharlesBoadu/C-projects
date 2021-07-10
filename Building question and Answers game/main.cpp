#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

using namespace std;

int main()
{
    string questions [25] = {
        " What is a correct syntax to output 'Hello World' in C++?\na. cout<<'Hello World'\nb. Console.WriteLine('Hello World')\nc. System.out.println('Hello world')\nd. print('Hello world')",
        " C++ is an alias of C#?\na. True\nb. False",
        " How do you insert COMMENTS in C++ code?\na. \\This is a comment\nb. # This is a comment\nc. /*This is a comment",
        " Which data type is used to create a variable that should store text?\na. String\nb. myString\nc. Txt\nd. string",
        " How do you create a variable with the numeric value 5\na. num x = 5\nb. int x = 5\nc. double x = 5\nd. x = 5",
        " How do you create a variable with the floating number 2.8?\na. double x = 2.8\nb. x = 2.8\nc. byte x = 2.8\nd. int x = 2.8",
        " Which method can be used to find the length of a string?\na. getSize()\nb. len()\nc. length()\nd. getLength()",
        " Which operator is used to add together two values?\na. The * sign\nb. The & sign\nc. The + sign",
        " The value of a string variable can be surrounded by single quotes.\na. True\nb. False",
        " Which header file lets us work with input and output objects?\na. #include <stream>nb. #include <iosstring>\nc. #include <inputstr>\nd. #include<iostream>",
        " Which operator can be used to compare two values?\na. > <\nb. <>\nc. ==\nd. =",
        " To declare an array in C++, define the variable type with\na. ()\nb. []\nc. {}",
        " Array indexes start with\na. 1\nb. 0",
        " How do you create a function in C++?\na. functionName() \nb. functionName\nc. functionName[]\nd. (functionName)",
        " How do you call a function in C++?\na. (functionName);\nb. functionName();\nc. functionName\nd. functionName[]",
        " Which keyword is used to create a class in C++?\na. MyClass\nb. className\nc. class\nd. class()",
        " What is the correct way to create an object called myObj of MyClass?\na. MyClass myObj;\nb. new myObj = MyClass();\nc. class myObj = new MyClass();\nd. class MyClass = new myObj();",
        " In C++, it is possible to inherit attributes and methods from one class to another.\na. True\nb. False",
        " Which method can be used to find the highest value of x and y?\na. maximum(x, y)\nb. maxNum(x, y)\nc. largest(x, y)\nd. max(x, y)",
        " Which operator is used to multiply numbers?\na. x\nb. *\nc. %\nd. #",
        " How do you create a reference variable of an existing variable?\na. with the * operator\nb. with the REF word\nc. with the ref word\nd. with the & operator",
        " How do you start writing an if statement in C++?\na. if x > y\nb. if x > y then\nc. if (x > y)",
        " How do you start writing a while loop in C++?\na. while x > y{\nb. x > y while {\nc. while (x > y)\nd. while x > y",
        " Which keyword is used to return a value inside a method?\na. Return\nb. Void\nc. Get\nd. Break",
        " Which statement is used to stop a loop?\na. Stop\nb. Break\nc. Exit\d. Return"
    };

    string answer, name;
    int score;

    cout <<"What is your name: ";
    getline(cin, name);

    cout <<"Hello "<<name<<", Welcome to Questions and Answers game!"<<endl;

    cout <<endl;

    srand(time(NULL));

    for (int i = 1; i<11; i++) {
        int questionNumber = rand() % 25;
        cout<<i<<"."<<questions[questionNumber]<<endl;
        cout<<"Choose the correct answer: ";
        cin>>answer;
        for_each (answer.begin(), answer.end(), [](char & c){
               c = tolower(c);
        });

        if (questionNumber == 0 && answer == "a") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 1 && answer == "b") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 2 && answer == "c") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 3 && answer == "d") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 4 && answer == "b") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 5 && answer == "a") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 6 && answer == "d") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 7 && answer == "c") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 8 && answer == "a") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 9 && answer == "d") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        }else if (questionNumber == 10 && answer == "a") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 11 && answer == "a") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 12 && answer == "b") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 13 && answer == "a") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 14 && answer == "c") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 15 && answer == "a") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 16 && answer == "c") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 17 && answer == "b") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 18 && answer == "d") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 19 && answer == "a") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 20 && answer == "a") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 21 && answer == "b") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 22 && answer == "a") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 23 && answer == "a") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else if (questionNumber == 24 && answer == "a") {
            cout <<"Correct for 1 point"<<endl;
            score += 1;
            cout <<endl;
        } else {
            cout <<"Oops! thats Incorrect!"<<endl;
            cout <<endl;
        }
    }

    cout <<"Game Over! "<<name<<", your score is "<<score<<endl;

    if (score >= 8) {
        cout <<"Well done! Keep it up!"<<endl;
    } else {
    cout <<"You can do better!"<<endl;
    }
    return 0;
}
