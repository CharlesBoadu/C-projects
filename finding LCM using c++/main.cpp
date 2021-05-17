#include <iostream>

using namespace std;

int main()
{
    int num1, num2, maxNum;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        maxNum = num1;
    } else {
        maxNum = num2;
    }

    do {
        if (maxNum % num1 == 0 && maxNum % num2 == 0) {
            cout << "LCM of the two numbers is " << maxNum;
            break;
        } else {
            ++maxNum;
        }
    }
    while (true);
    return 0;
}
