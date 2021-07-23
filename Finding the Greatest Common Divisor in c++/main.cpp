#include <iostream>

using namespace std;

int gcd(int num1, int num2) {
    if (num1 == 0) {
        return num2;
    }

    if (num2 == 0) {
        return num1;
    }

    if (num1 == num2) {
        return num1;
    }

    if (num1 > num2) {
        return gcd(num1-num2, num2);
    return gcd(num1, num2-num1);
    }
}

int main()
{
    int num1, num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout << " The Greatest Common Divisor of "<<num1<<" and "<<num2<<" is "<<gcd(num1, num2);
    return 0;
}
