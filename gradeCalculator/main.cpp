#include <iostream>

using namespace std;

int main()
{
    int scores[5];
    int sum = 0;
    double average;
    string name;
    cout <<"What is your name?"<<endl;
    cin >>name;
    cout <<"Hello "<<name<<", let's calculate your grade by entering five (5) scores"<<endl;
    for (int i=1; i<6; i++) {
        cout <<"Enter score "<<i<<" : "<<endl;
        cin >>scores[i];
        sum += scores[i];
    }

    average = sum / 5;
    cout <<"Your average is "<<average<<endl;

    if (average >= 90) {
        cout <<"Grade = A";
    } else if (average >= 80 && average <= 90) {
        cout <<"Grade = B";
    } else if (average >= 70 && average <= 80) {
        cout <<"Grade = C";
    } else if (average >= 60 && average <= 70) {
        cout <<"Grade = D";
    } else {
        cout <<"Grade = F";
    }
    return 0;
}
