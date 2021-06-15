#include <iostream>

using namespace std;

int main()
{
    string grade, confirmation, course, name;
    string courseList[] = {};
    int numberOfCourses, creditHours, creditHour;
    float gpa, cgpa;
    gpa = 0.0;
    cout <<"---------------------UNIVERSITY OF CAPE COAST CGPA Calculator-----------------------"<<endl;

    cout <<endl;

    cout <<"What is your name: ";
    getline(cin, name);

    cout <<"Hello "<<name<<", Welcome to CGPA Calculator!"<<endl;

    cout <<endl;

    cout << "Enter the number of courses you took for the semester: ";
    cin >>numberOfCourses;

    cout <<endl;

    cout << "Enter the credit hours for the courses: ";
    cin >>creditHours;

    for (int i = 0; i < numberOfCourses; i++) {
        cout <<"Enter name of course you took: ";
        getline(cin, course);
        courseList[i] = course;
    }

    for (int i = 0; i < numberOfCourses; i++) {
        cout <<courseList[i];
    }

    for (int i = 0; i < numberOfCourses; i++) {
        cout <<"Grade for "<<courseList[i]<<": ";
        cin >>grade;
        cout <<"Enter credit hours for "<<courseList[i]<<": "<<endl;
        cin >>creditHour;

        if (grade == "A") {
            gpa += (4.0 * creditHour);
        } else if (grade == "B+") {
            gpa += (3.5 * creditHour);
        } else if (grade == "B"){
            gpa += (3.0 * creditHour);
        } else if (grade == "C+") {
            gpa += (2.5 * creditHour);
        } else if (grade == "C") {
            gpa += (2.0 * creditHour);
        } else if (grade == "D+") {
            gpa += (1.5 * creditHour);
        } else if (grade == "D") {
             gpa += (1.0 * creditHour);
        } else {
            gpa += (0.0 * creditHour);
        }
    }

    cout <<"Type 'yes' if this your first semester as a level 100 and 'no' if otherwise: ";
    cin >>confirmation;

    if (confirmation == "yes") {
        cout <<"Your CGPA is "<<gpa<<endl;
    } else {
        cout <<"What is your CGPA currently: ";
        cin >>cgpa;

        cgpa = cgpa / creditHours;

        cgpa += (gpa / creditHours);
        cout <<"Your CGPA is "<<cgpa;
    }

    return 0;
}
