#include <iostream>

using namespace std;

int main()
{
    string grade, confirmation, courseCode, name, semester;
    string courseList[15];
    int creditHourList[15];
    int numberOfCourses, creditHours, creditHour, level;
    float creditHour100FirstSem, gradePoint100FirstSem, creditHour100SecondSem, gradePoint100SecondSem;
    float gradePoint200FirstSem, creditHour200FirstSem, gradePoint200SecondSem, creditHour200SecondSem;
    float gradePoint300FirstSem, creditHour300FirstSem, gradePoint300SecondSem, creditHour300SecondSem;
    float gradePoint400FirstSem, creditHour400FirstSem;
    float totalCreditHours, totalGradePoint;
    float gp, cgpa;
    gp = 0.0;
    cout <<"---------------------UNIVERSITY OF CAPE COAST CGPA Calculator-----------------------"<<endl;

    cout <<endl;

    cout <<"What is your name: ";
    getline(cin, name);

    cout <<"Hello "<<name<<", Welcome to CGPA Calculator!"<<endl;

    cout <<endl;

    cout << "Enter the number of courses you took for the semester: ";
    cin >>numberOfCourses;

    cout <<endl;

    cout << "Enter the total credit hours for all the courses: ";
    cin >>creditHours;

    cout <<endl;

    cout <<"Enter course code. eg: MAT101"<<endl;
    for (int i = 1; i < numberOfCourses + 1; i++) {
        cout <<"Enter course code: ";
        cin>>courseCode;
        courseList[i] = courseCode;

        cout <<"Enter the credit hour for that course: ";
        cin >>creditHour;
        creditHourList[i] = creditHour;
        cout <<endl;
    }

    cout <<"These are the courses you took last semester with their respective credit hours: "<<endl;
    cout <<endl;

    for (int i = 1; i < numberOfCourses + 1; i++) {
        cout <<courseList[i]<<"                "<<creditHourList[i];
        cout <<endl;
    }

    cout <<endl;
    for (int i = 1; i < numberOfCourses + 1; i++) {
        cout <<"Grade for "<<courseList[i]<<": ";
        cin >>grade;
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

    cout <<endl;

    if (confirmation == "yes") {
        cout <<"Your CGPA is "<<gp / creditHours<<endl;
    } else {
        cout <<"Which level are you in currently. eg. 100, 200, 300, etc...: ";
        cin >>level;
        cout <<"Enter the semester eg. One or two: ";
        cin >>semester;

    if (level == 100 && semester == "two") {
        cout <<"Enter the total Grade Point (GP) for level 100 first semester: ";
        cin >>gradePoint100FirstSem;
        cout <<"Enter the total credit hour for first semester: ";
        cin >>creditHour100FirstSem;

        totalGradePoint = gradePoint100FirstSem + gp;
        totalCreditHours = creditHour100FirstSem + creditHours;
        cgpa = totalGradePoint / totalCreditHours;
    } else if (level == 200 && semester == "one") {
        cout <<"Enter the total Grade Point (GP) for level 100 first semester: ";
        cin >>gradePoint100FirstSem;
        cout <<"Enter the total credit hour for first semester: ";
        cin >>creditHour100FirstSem;
        cout <<"Enter the total Grade Point (GP) for level 100 second semester: ";
        cin >>gradePoint100SecondSem;
        cout <<"Enter the total credit hour for second semester: ";
        cin >>creditHour100SecondSem;

        totalGradePoint = gradePoint100FirstSem + gradePoint100SecondSem + gp;
        totalCreditHours = creditHour100FirstSem + creditHour100SecondSem + creditHours;

        cgpa = totalGradePoint / totalCreditHours;

    } else if (level == 200 && semester == "two") {
        cout <<"Enter the total Grade Point (GP) for level 100 first semester: ";
        cin >>gradePoint100FirstSem;
        cout <<"Enter the total credit hour for first semester: ";
        cin >>creditHour100FirstSem;
        cout <<"Enter the total Grade Point (GP) for level 100 second semester: ";
        cin >>gradePoint100SecondSem;
        cout <<"Enter the total credit hour for second semester: ";
        cin >>creditHour100SecondSem;
        cout <<"Enter the total Grade Point (GP) for level 200 first semester: ";
        cin >>gradePoint200FirstSem;
        cout <<"Enter the total credit hour for first semester: ";
        cin >>creditHour200FirstSem;

        totalGradePoint = gradePoint100FirstSem + gradePoint100SecondSem + gradePoint200FirstSem + gp;
        totalCreditHours = creditHour100FirstSem + creditHour100SecondSem + creditHour200FirstSem + creditHours;

        cgpa = totalGradePoint / totalCreditHours;

    } else if (level == 300 && semester == "one") {
        cout <<"Enter the total Grade Point (GP) for level 100 first semester: ";
        cin >>gradePoint100FirstSem;
        cout <<"Enter the total credit hour for first semester: ";
        cin >>creditHour100FirstSem;
        cout <<"Enter the total Grade Point (GP) for level 100 second semester: ";
        cin >>gradePoint100SecondSem;
        cout <<"Enter the total credit hour for second semester: ";
        cin >>creditHour100SecondSem;
        cout <<"Enter the total Grade Point (GP) for level 200 first semester: ";
        cin >>gradePoint200FirstSem;
        cout <<"Enter the total credit hour for first semester: ";
        cin >>creditHour200FirstSem;
        cout <<"Enter the total Grade Point (GP) for level 200 second semester: ";
        cin >>gradePoint200SecondSem;
        cout <<"Enter the total credit hour for first semester: ";
        cin >>creditHour200SecondSem;

        totalGradePoint = gradePoint100FirstSem + gradePoint100SecondSem + gradePoint200FirstSem + gradePoint200SecondSem + gp;
        totalCreditHours = creditHour100FirstSem + creditHour100SecondSem + creditHour200FirstSem + creditHour200SecondSem + creditHours;

        cgpa = totalGradePoint / totalCreditHours;
    } else if (level == 300 && semester == "two") {
        cout <<"Enter the total Grade Point (GP) for level 100 first semester: ";
        cin >>gradePoint100FirstSem;
        cout <<"Enter the total credit hour for first semester: ";
        cin >>creditHour100FirstSem;
        cout <<"Enter the total Grade Point (GP) for level 100 second semester: ";
        cin >>gradePoint100SecondSem;
        cout <<"Enter the total credit hour for second semester: ";
        cin >>creditHour100SecondSem;
        cout <<"Enter the total Grade Point (GP) for level 200 first semester: ";
        cin >>gradePoint200FirstSem;
        cout <<"Enter the total credit hour for first semester: ";
        cin >>creditHour200FirstSem;
        cout <<"Enter the total Grade Point (GP) for level 200 second semester: ";
        cin >>gradePoint200SecondSem;
        cout <<"Enter the total credit hour for first semester: ";
        cin >>creditHour200SecondSem;
        cout <<"Enter the total Grade Point (GP) for level 300 first semester: ";
        cin >>gradePoint300FirstSem;
        cout <<"Enter the total credit hour for first semester: ";
        cin >>creditHour300FirstSem;

        totalGradePoint = gradePoint100FirstSem + gradePoint100SecondSem + gradePoint200FirstSem + gradePoint200SecondSem + gradePoint300FirstSem + gp;
        totalCreditHours = creditHour100FirstSem + creditHour100SecondSem + creditHour200FirstSem + creditHour200SecondSem + creditHour300FirstSem + creditHours;

        cgpa = totalGradePoint / totalCreditHours;
    } else if (level == 400 && semester == "one") {
        cout <<"Enter the total Grade Point (GP) for level 100 first semester: ";
        cin >>gradePoint100FirstSem;
        cout <<"Enter the total credit hour for first semester: ";
        cin >>creditHour100FirstSem;
        cout <<"Enter the total Grade Point (GP) for level 100 second semester: ";
        cin >>gradePoint100SecondSem;
        cout <<"Enter the total credit hour for second semester: ";
        cin >>creditHour100SecondSem;
        cout <<"Enter the total Grade Point (GP) for level 200 first semester: ";
        cin >>gradePoint200FirstSem;
        cout <<"Enter the total credit hour for first semester: ";
        cin >>creditHour200FirstSem;
        cout <<"Enter the total Grade Point (GP) for level 200 second semester: ";
        cin >>gradePoint200SecondSem;
        cout <<"Enter the total credit hour for first semester: ";
        cin >>creditHour200SecondSem;
        cout <<"Enter the total Grade Point (GP) for level 300 first semester: ";
        cin >>gradePoint300FirstSem;
        cout <<"Enter the total credit hour for first semester: ";
        cin >>creditHour300FirstSem;
        cout <<"Enter the total Grade Point (GP) for level 300 second semester: ";
        cin >>gradePoint300SecondSem;
        cout <<"Enter the total credit hour for first semester: ";
        cin >>creditHour300SecondSem;

        totalGradePoint = gradePoint100FirstSem + gradePoint100SecondSem + gradePoint200FirstSem + gradePoint200SecondSem + gradePoint300FirstSem + gradePoint300SecondSem + gp;
        totalCreditHours = creditHour100FirstSem + creditHour100SecondSem + creditHour200FirstSem + creditHour200SecondSem + creditHour300FirstSem + creditHour300SecondSem + creditHours;

        cgpa = totalGradePoint / totalCreditHours;

    } else if (level == 400 && semester == "two") {
        cout <<"Enter the total Grade Point (GP) for level 100 first semester: ";
        cin >>gradePoint100FirstSem;
        cout <<"Enter the total credit hour for first semester: ";
        cin >>creditHour100FirstSem;
        cout <<"Enter the total Grade Point (GP) for level 100 second semester: ";
        cin >>gradePoint100SecondSem;
        cout <<"Enter the total credit hour for second semester: ";
        cin >>creditHour100SecondSem;
        cout <<"Enter the total Grade Point (GP) for level 200 first semester: ";
        cin >>gradePoint200FirstSem;
        cout <<"Enter the total credit hour for first semester: ";
        cin >>creditHour200FirstSem;
        cout <<"Enter the total Grade Point (GP) for level 200 second semester: ";
        cin >>gradePoint200SecondSem;
        cout <<"Enter the total credit hour for first semester: ";
        cin >>creditHour200SecondSem;
        cout <<"Enter the total Grade Point (GP) for level 300 first semester: ";
        cin >>gradePoint300FirstSem;
        cout <<"Enter the total credit hour for first semester: ";
        cin >>creditHour300FirstSem;
        cout <<"Enter the total Grade Point (GP) for level 300 second semester: ";
        cin >>gradePoint300SecondSem;
        cout <<"Enter the total credit hour for first semester: ";
        cin >>creditHour300SecondSem;
        cout <<"Enter the total Grade Point (GP) for level 400 first semester: ";
        cin >>gradePoint400FirstSem;

        totalGradePoint = gradePoint100FirstSem + gradePoint100SecondSem + gradePoint200FirstSem + gradePoint200SecondSem + gradePoint300FirstSem + gradePoint300SecondSem + gradePoint400FirstSem + gp;
        totalCreditHours = creditHour100FirstSem + creditHour100SecondSem + creditHour200FirstSem + creditHour200SecondSem + creditHour300FirstSem + creditHour300SecondSem + creditHour400FirstSem + creditHours;

        cgpa = totalGradePoint / totalCreditHours;
    }


        cout <<"Your CGPA is "<<cgpa;
    }

    return 0;
}
