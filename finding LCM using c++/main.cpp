#include <iostream>

using namespace std;

int main()
{
    int num1, num2, maxNum;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 > num2) {
        maxNum = num1;
    } else {
        maxNum = num2;
    }

    do {
        if (maxNum % num1 == 0 && maxNum % num2 == 0) {
            cout << "The Least Common Multiple of the two numbers is " << maxNum;
            break;
        } else {
            ++maxNum;
        }
    }
    while (true);
    return 0;
}
