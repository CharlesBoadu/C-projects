#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string grade, confirmation, courseCode, name, semester;
    string courseList[15];
    int creditHourList[15];
    float numberOfCourses, creditHours, creditHour, level, yearLevel, semesterNumber, gradePoint, semCreditHours;
    yearLevel = 100;
    float gp, cgpa, totalGradePoint, totalCreditHours;
    totalGradePoint = 0;
    totalCreditHours = 0;
    gp = 0.0;


    cout <<"---------------------UNIVERSITY OF CAPE COAST CGPA Calculator-----------------------"<<endl;

    cout <<endl;

    cout <<"What is your name: ";
    getline(cin, name);

    cout <<"Hello "<<name<<", Welcome to CGPA Calculator!"<<endl;

    cout <<endl;

    cout << "Enter the number of courses you took for the semester: ";
    cin >>numberOfCourses;
    while(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout <<"Invalid Response. Input must be an integer!"<<endl;
        cout <<endl;
        cout << "Enter the number of courses you took for the semester: ";
        cin >>numberOfCourses;
    }

    cout <<endl;

    cout << "Enter the total credit hours for all the courses: ";
    cin >>creditHours;
    while(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout <<"Invalid Response. Input must be an integer!"<<endl;
        cout <<endl;
        cout << "Enter the total credit hours for all the courses: ";
        cin >>creditHours;
    }

    cout <<endl;

    cout <<"Enter course code. eg: MAT101"<<endl;
    for (int i = 1; i < numberOfCourses + 1; i++) {
        cout <<"Enter course code: ";
        cin>>courseCode;
        courseList[i] = courseCode;
        cout <<"Enter the credit hour for that course: ";
        cin >>creditHour;

        while(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout <<"Invalid Response. Input must be an integer!"<<endl;
        cout <<endl;
        cout <<"Enter the credit hour for that course: ";
        cin >>creditHour;
        }

        creditHourList[i] = creditHour;
        cout <<endl;
    }

    cout <<"These are the courses you took last semester with their respective credit hours: "<<endl;
    cout <<endl;
    cout <<"Courses"<<"             "<<"Credit Hours"<<endl;


    for (int i = 1; i < numberOfCourses + 1; i++) {
        cout <<courseList[i]<<"                "<<creditHourList[i];
        cout <<endl;
    }

    cout <<endl;
    for (int i = 1; i < numberOfCourses + 1; i++) {
        cout <<"Enter grade for "<<courseList[i]<<": ";
        cin >>grade;

         while (grade != "A" && grade != "B+" && grade != "B" && grade != "C+" && grade != "C" && grade != "D+" && grade != "D" && grade != "E") {
            cout <<"Invalid Input"<<endl;
            cout <<endl;
            cout <<"Enter grade for "<<courseList[i]<<": ";
            cin >>grade;
        }

        cout <<endl;

        if (grade == "A") {
            gp += (4.0 * creditHourList[i]);
        } else if (grade == "B+") {
            gp += (3.5 * creditHourList[i]);
        } else if (grade == "B"){
            gp += (3.0 * creditHourList[i]);
        } else if (grade == "C+") {
            gp += (2.5 * creditHourList[i]);
        } else if (grade == "C") {
            gp += (2.0 * creditHourList[i]);
        } else if (grade == "D+") {
            gp += (1.5 * creditHourList[i]);
        } else if (grade == "D") {
             gp += (1.0 * creditHourList[i]);
        } else {
            gp += (0.0 * creditHourList[i]);
        }
    }

    cout <<endl;
    cout <<"Type 'yes' if this your first semester as a level 100 and 'no' if otherwise: ";
    cin >>confirmation;
    for_each (confirmation.begin(), confirmation.end(), [](char & c){
               c = tolower(c);
            });

    cout <<confirmation;
    cout <<endl;

    if (confirmation == "yes") {
        cout <<"Your CGPA is "<<gp / creditHours<<endl;
    } else {
        cout <<endl;
        cout <<"Which level are you in currently. eg. 100, 200, 300, etc...: ";
        cin >>level;
        while(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout <<"Invalid Response. Input must be an integer!"<<endl;
        cout <<endl;
        cout <<"Which level are you in currently. eg. 100, 200, 300, etc...: ";
        cin >>level;
        }

        cout <<"Enter the semester eg. One or two: ";
        cin >>semester;
        for_each (semester.begin(), semester.end(), [](char & c){
               c = tolower(c);
            });

        while (semester != "one" && semester != "two") {
            cout <<"Invalid Input!"<<endl;
            cout <<"Enter the semester eg. One or two: ";
            cin >>semester;
            for_each (semester.begin(), semester.end(), [](char & c){
               c = tolower(c);
            });
        }
    }

    cout <<endl;
    if (level == 100 && semester == "two") {
        for (int i = 0; i < 1; i++) {
            yearLevel = 100;
            totalGradePoint = 0;
            semesterNumber = 1;

            cout <<"Enter the total Grade Point (GP) for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
            cin >>gradePoint;
            while(cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout <<"Invalid Response. Input must be an integer or a double!"<<endl;
                cout <<endl;
                cout <<"Enter the total Grade Point (GP) for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
                cin >>gradePoint;
            }
             totalGradePoint += gradePoint;

            cout <<"Enter the total Credit Hours for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
            cin >>semCreditHours;
            while(cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout <<"Invalid Response. Input must be an integer or a double!"<<endl;
                cout <<endl;
                cout <<"Enter the total Credit Hours for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
                cin >>semCreditHours;
            }

            totalCreditHours += semCreditHours;

                cout<<endl;
            }

        totalGradePoint += gp;
        totalCreditHours += creditHours;

        cgpa = totalGradePoint / totalCreditHours;

    } else if (level == 200 && semester == "one") {
        cout <<endl;
        for (int i = 1; i < 3; i++) {
            if (i % 2 == 0) {
                semesterNumber = 2;
            } else {
                semesterNumber = 1;
            }

            cout <<"Enter the total Grade Point (GP) for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
            cin >>gradePoint;
             while(cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout <<"Invalid Response. Input must be an integer or a double!"<<endl;
                cout <<endl;
                cout <<"Enter the total Grade Point (GP) for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
                cin >>gradePoint;
             }
                totalGradePoint += gradePoint;

                cout <<"Enter the total Credit Hours for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
                cin >>semCreditHours;
                while(cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(),'\n');
                    cout <<"Invalid Response. Input must be an integer or a double!"<<endl;
                    cout <<endl;
                    cout <<"Enter the total Credit Hours for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
                    cin >>semCreditHours;
                }

                totalCreditHours += semCreditHours;

                cout<<endl;
             }



        totalGradePoint += gp;
        totalCreditHours += creditHours;

        cgpa = totalGradePoint / totalCreditHours;

    } else if (level == 200 && semester == "two") {
        for (int i = 1; i < 4; i++) {
            if (i % 2 == 0) {
                semesterNumber = 2;
            } else {
                semesterNumber = 1;
            }

            cout <<"Enter the total Grade Point (GP) for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
            cin >>gradePoint;
            while(cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout <<"Invalid Response. Input must be an integer!"<<endl;
            cout <<endl;
            cout <<"Enter the total Grade Point (GP) for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
            cin >>gradePoint;
            }

            totalGradePoint += gradePoint;

            while(cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout <<"Invalid Response. Input must be an integer!"<<endl;
            cout <<endl;
            cout <<"Enter the total Credit Hours for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
            cin >>semCreditHours;
            }

            totalCreditHours += semCreditHours;

            cout<<endl;
             }

            if (semesterNumber == 2) {
                yearLevel += 100;
            }

        totalGradePoint += gp;
        totalCreditHours += creditHours;

        cgpa = totalGradePoint / totalCreditHours;

    } else if (level == 300 && semester == "one") {
        for (int i = 1; i < 5; i++) {
            if (i % 2 == 0) {
                semesterNumber = 2;
            } else {
                semesterNumber = 1;
            }

            cout <<"Enter the total Grade Point (GP) for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
            cin >>gradePoint;
            while(cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout <<"Invalid Response. Input must be an integer!"<<endl;
            cout <<endl;
            cout <<"Enter the total Grade Point (GP) for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
            cin >>gradePoint;
            }

            totalGradePoint += gradePoint;

            cout <<"Enter the total Credit Hours for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
            cin >>semCreditHours;
            while(cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout <<"Invalid Response. Input must be an integer!"<<endl;
            cout <<endl;
            cout <<"Enter the total Credit Hours for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
            cin >>semCreditHours;
            }

            totalCreditHours += semCreditHours;

            cout<<endl;
             }

            if (semesterNumber == 2) {
                yearLevel += 100;
            }

        totalGradePoint += gp;
        totalCreditHours += creditHours;

        cgpa = totalGradePoint / totalCreditHours;

    } else if (level == 300 && semester == "two") {
        for (int i = 1; i < 6; i++) {
            if (i % 2 == 0) {
                semesterNumber = 2;
            } else {
                semesterNumber = 1;
            }

            cout <<"Enter the total Grade Point (GP) for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
            cin >>gradePoint;
            while(cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout <<"Invalid Response. Input must be an integer!"<<endl;
                cout <<endl;
                cout <<"Enter the total Grade Point (GP) for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
                cin >>gradePoint;
            }

            totalGradePoint += gradePoint;

            cout <<"Enter the total Credit Hours for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
            cin >>semCreditHours;
            while(cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout <<"Invalid Response. Input must be an integer!"<<endl;
                cout <<endl;
                cout <<"Enter the total Credit Hours for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
                cin >>semCreditHours;
            }

            totalCreditHours += semCreditHours;

            cout<<endl;

            if (semesterNumber == 2) {
                yearLevel += 100;
            }

        }

        totalGradePoint += gp;
        totalCreditHours += creditHours;

        cgpa = totalGradePoint / totalCreditHours;

    } else if (level == 400 && semester == "one") {
        for (int i = 1; i < 7; i++) {
            if (i % 2 == 0) {
                semesterNumber = 2;
            } else {
                semesterNumber = 1;
            }

            cout <<"Enter the total Grade Point (GP) for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
            cin >>gradePoint;
            while(cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout <<"Invalid Response. Input must be an integer!"<<endl;
            cout <<endl;
            cout <<"Enter the total Grade Point (GP) for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
            cin >>gradePoint;
            }

            totalGradePoint += gradePoint;

            cout <<"Enter the total Credit Hours for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
            cin >>semCreditHours;
            while(cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout <<"Invalid Response. Input must be an integer!"<<endl;
            cout <<endl;
            cout <<"Enter the total Credit Hours for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
            cin >>semCreditHours;
            }

            totalCreditHours += semCreditHours;

            cout<<endl;
             }

             if (semesterNumber == 2) {
                yearLevel += 100;
            }


        totalGradePoint += gp;
        totalCreditHours += creditHours;

        cgpa = totalGradePoint / totalCreditHours;

    } else if (level == 400 && semester == "two") {
        for (int i = 1; i < 8; i++) {
            if (i % 2 == 0) {
                semesterNumber = 2;
            } else {
                semesterNumber = 1;
            }

            cout <<"Enter the total Grade Point (GP) for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
            cin >>gradePoint;
            while(cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout <<"Invalid Response. Input must be an integer!"<<endl;
                cout <<endl;
                cout <<"Enter the total Grade Point (GP) for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
                cin >>gradePoint;
            }

            totalGradePoint += gradePoint;

            cout <<"Enter the total Credit Hours for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
            cin >>semCreditHours;
            while(cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout <<"Invalid Response. Input must be an integer!"<<endl;
                cout <<endl;
                cout <<"Enter the total Credit Hours for level "<<yearLevel<<" semester "<<semesterNumber<<": ";
                cin >>semCreditHours;
            }
                totalCreditHours += semCreditHours;

                cout<<endl;
            }

            if (semesterNumber == 2) {
                yearLevel += 100;
            }

        totalGradePoint += gp;
        totalCreditHours += creditHours;

        cgpa = totalGradePoint / totalCreditHours;
    }



    cout<<endl;
    cout <<name<<", your current CGPA is "<<cgpa;

    return 0;
}
