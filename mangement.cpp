/* creating a program where we can aadd student data and on the basis of their 10th class performace we can allot them streams in 11th standard. */

#include <bits/stdc++.h>
using namespace std;

typedef struct Student
{
    string name;
    int enrollment_Number;
    float tenth_percentage;
} Stu;
// creating a short form of struct keyword using typedef function "stu"
class student_details
{
private:
    vector<Stu> students; // using vectors for storing data of students for better memory management
public:
    void add_student(); // fucntion for adding students in the database
    void Display();     // function to display data
    void Delete_student(int enrollment_Number)
    {
        auto it = find_if(students.begin(), students.end(), [enrollment_Number](const Stu &s)
                          { return s.enrollment_Number == enrollment_Number; });
        if (it != students.end())
        {
            students.erase(it);
            cout << " DATA DELETED SUCCESSFULLY" << endl;
        }
        else
        {
            cout << " DATA NOT FOUND" << endl;
        }
    } // function to delete student
    /* here auto is a built in function of c++ which is used to automatically deduce the type of variable.
    and it is a iterators in STL library
    using vectors functions we can search through data and delete the target data*/
    void update_student(int enrollment_Number)
    {
        auto it = find_if(students.begin(), students.end(), [enrollment_Number](const Stu &s)
                          { return s.enrollment_Number == enrollment_Number; });
        if (it != students.end())
        {
            cout << " ENTER THE NEW NAME :";
            getline(cin, it->name);
            cout << " ENTER THE NEW TENTH PERCENTAGE :";
            cin >> it->tenth_percentage;
            cout << " DATA UPDATED SUCCESSFULLY" << endl;
        }
        else
        {
            cout << " DATA NOT FOUND" << endl;
        }
    }
};
// defining the function outside the class using scope resolution operator
void student_details ::add_student()
{
    Stu s1; // s1 is a local variable
    cout << " ENTER THE FULL NAME OF THE STUDENT :";
    cin >> s1.name;

    cout << " ENTER THE ENROLLMENT NUMBER OF THE STUDENT  : ";
    cin >> s1.enrollment_Number;

    cout << " ENTER THE TENTH PERCENATGE OF THE STUDENT (DON'T USE % SYMBOL) :";
    cin >> s1.tenth_percentage;

    students.push_back(s1);

    cout << " DATA ADDED SUCCESSFULLY" << endl;
    // data added to the momory
}
class streams_allocation
{
    // allocating streams on the basis of  10th class performance

public:
    void allocation()
    {
        float x;
        cout << " ENTER YOUR TENTH PERCENTAGE :";
        cin >> x;
        if (x > 80.0 && x < 100.0)
        {
            cout << " YOU CAN CHOOSE ANY STREAM " << endl;
            cout << " 1. SCIENCE" << endl;
            cout << " 2. COMMERCE" << endl;
            cout << " 3. HUMANITIES" << endl;
        }
        else if (x > 65.0 && x < 80.0 || x == 80.0)
        {
            cout << " YOU CAN CHOOSE FROM GIVEN STREAM OPTIONS " << endl;
            cout << " 1. COMMERCE" << endl;
            cout << " 2. HUMANITIES" << endl;
        }
        else if (x > 45.0 && x < 65.0 || x == 65.0)
        {
            cout << " YOU CAN CHOOSE HUMANITIES STREAM " << endl;
        }
        else
        {
            cout << " YOU ARE NOT ELLIGIBLE FOR ANY STREAM!!" << endl;
        }
    }
};

void student_details ::Display()
{
    if (students.empty())
    {
        cout << " THE DATABASE IS EMPTY " << endl;
    }
    else
    {
        cout << " THE DATA IN THE DATABASE :" << endl;
        cout << setw(10) << "NAME" << setw(25) << "ENROLLMENT NUMBER" << setw(20) << "TENTH PERCENTAGE" << endl;
        for (const auto &students : students)
        {
            cout << setw(10) << students.name << setw(20) << students.enrollment_Number << setw(15) << students.tenth_percentage << endl;
        }
    }
}

int main()
{

    student_details data;
    streams_allocation DATA;
    int option, enrollment_Number;
    do
    {
        cout << "*****-------------------------------------------------------------------*********" << endl;
        cout << setw(10) << " \t WELCOME TO THE SCHOOL DATABASE MANAGEMENT SYSTEM " << endl;
        cout << setw(10) << " \t 1. ADD DATA " << endl;
        cout << setw(10) << " \t 2. DISPLAY DATA " << endl;
        cout << setw(10) << " \t 3. DELETE DATA " << endl;
        cout << setw(10) << " \t 4. UPDATE DATA " << endl;
        cout << setw(10) << " \t 5. STREAM ALLOCATION " << endl;
        cout << setw(10) << " \t 6. EXIT " << endl;
        cout << "*****-------------------------------------------------------------------*********" << endl;
        cout << " ENTER YOUR CHOICE :";
        cin >> option;
        cout << endl;
        switch (option)
        {
        case 1:
            data.add_student();
            break;
        case 2:
            data.Display();
            break;
        case 3:
            cout << " ENTER THE ENROLLMENT NUMBER OF THE STUDENT YOU WANT TO DELETE :";
            cin >> enrollment_Number;
            data.Delete_student(enrollment_Number);
            break;
        case 4:
            cout << " ENTER THE ENROLLMENT NUMBER OF THE STUDENT YOU WANT TO UPDATE :";
            cin >> enrollment_Number;
            data.update_student(enrollment_Number);
            break;
        case 5:
            DATA.allocation();
            break;
        case 6:
            cout << " EXITING THE PROGRAM " << endl;
            exit(0);
        default:
            cout << " INVALID CHOICE " << endl;
        }
    } while (option != 6);

    return 0;
}
