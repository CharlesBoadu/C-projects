#include <iostream>

using namespace std;

double number1;
double number2;


void operators () {
    cout <<"Press '+' for addition"<<endl;
    cout <<"Press '/' for division"<<endl;
    cout <<"Press '-' for subtraction"<<endl;
    cout <<"Press '*' for multiplication"<<endl;

    cout << "Which operator do you want to use?" <<endl;
};


void addition(double number1, double number2) {
    cout << "The addition of "<<number1<< " and " <<number2 <<" is " <<number1+number2<<endl;
}

void division (double number1, double number2) {
    cout << "The division of "<<number1<< " and " <<number2 <<" is " <<number1/number2<<endl;
}

double subtraction (double number1, double number2) {
    cout << "The subtraction of "<<number1<< " and " <<number2<< " is " <<number1-number2<<endl;
}

double multiplication (double number1, double number2) {
    cout << "The multiplication of "<<number1<< " and " <<number2<< " is " <<number1*number2<<endl;
}

void validity () {

}
int main()
{
    string name, useCalculator;
    cout << "What is your name please?"<<endl;
    getline(cin, name);
    cout << endl;
    cout << "----------------Hello " <<name<<". What can I calculate for you today!--------------" << endl;
    double number1;
    double number2;
    char operator_to_use;
    cout << "Enter the first number?"<<endl;
    cin >> number1;
    cout <<"Enter the second number?" <<endl;
    cin >>number2;
    operators();
    cin >>operator_to_use;
    useCalculator = "yes";

    if (operator_to_use == '+') {
            addition (number1, number2);
        } else if (operator_to_use == '/') {
            division(number1, number2);
        } else if (operator_to_use == '*') {
             multiplication(number1, number2);
        } else if (operator_to_use == '-') {
            subtraction(number1, number2);
        }


    while (operator_to_use != '+' && operator_to_use != '*' && operator_to_use != '/' && operator_to_use != '-') {
        cout <<"Invalid Operator"<<endl;
        cout <<endl;
        operators();
        cin >>operator_to_use;
            if (operator_to_use == '+') {
                addition (number1, number2);
                break;
            } else if (operator_to_use == '/') {
                division(number1, number2);
                break;
            } else if (operator_to_use == '*') {
                 multiplication(number1, number2);
                 break;
            } else if (operator_to_use == '-') {
                subtraction(number1, number2);
                break;
            }

    }

    do {
        cout <<endl;
        cout <<"Do you still want to use calculator. Type 'yes' to continue and 'no' to stop: ";
        cin >>useCalculator;
         if (useCalculator == "no") {
            break;
         } else {
            double number1;
            double number2;
            char operator_to_use;
            cout << "Enter the first number?"<<endl;
            cin >> number1;
            cout <<"Enter the second number?" <<endl;
            cin >>number2;
            operators();
            cin >>operator_to_use;
            if (operator_to_use == '+') {
                addition (number1, number2);
            } else if (operator_to_use == '/') {
                division(number1, number2);
            } else if (operator_to_use == '*') {
                 multiplication(number1, number2);
            } else if (operator_to_use == '-') {
                subtraction(number1, number2);
            }


            while (operator_to_use != '+' && operator_to_use != '*' && operator_to_use != '/' && operator_to_use != '-') {
            cout <<"Invalid Operator"<<endl;
            cout <<endl;
            operators();
            cin >>operator_to_use;
            if (operator_to_use == '+') {
                addition (number1, number2);
                break;
            } else if (operator_to_use == '/') {
                division(number1, number2);
                break;
            } else if (operator_to_use == '*') {
                 multiplication(number1, number2);
                 break;
            } else if (operator_to_use == '-') {
                subtraction(number1, number2);
                break;
            }

    }
         }
    } while (useCalculator == "yes");

    cout <<endl;
    cout <<name<<", thanks for calculating today! Bye!";

    return 0;
}
