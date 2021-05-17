#include <iostream>

using namespace std;

void addition (double num1, double num2) {
    cout << "The addition of the two numbers is " <<num1 + num2<<endl;
}
void subtraction (double num1, double num2) {
    cout << "The subtraction of the two numbers is " <<num1 - num2<<endl;
}
void multiplication (double num1, double num2) {
    cout << "The multiplication of the two numbers is " <<num1 * num2<<endl;
}
void division (double num1, double num2) {
    cout << "The division of the two numbers is " <<num1 / num2<<endl;
}

void operators () {
    cout << "Enter '+' for addition" <<endl;
    cout << "Enter '-' for subtraction" <<endl;
    cout << "Enter '/' for division" <<endl;
    cout << "Enter '*' for multiplication" <<endl;
}

int main()
{
    int num1, num2;
    string name;
    char op;

    cout <<"----------Hello there!-------"<<endl;
    cout <<"What is your name: ";
    cin >>name;
    cout <<"----------Welcome "<<name<<". What can I calculate for you today!-------"<<endl;
    cout <<"Enter the two numbers"<<endl;
    cin >>num1>>num2;
    operators();
    cout <<"Enter the operator: ";
    cin >> op;

    switch (op) {
    case ('+'):
        addition(num1, num2);
        break;
    case ('-'):
        subtraction(num1, num2);
        break;
    case ('*'):
        multiplication(num1, num2);
        break;
    case ('/'):
        division(num1, num2);
        break;
    }

    cout <<"Thanks for calculating today! Bye!";
    return 0;
}
