/* creating a program where we can aadd student data and on the basis of their 10th class performace we can allot them streams in 11th standard. */

#include<bits/stdc++.h>
using namespace std;


typedef struct Student 
{
    string name;
    int enrollment_Number;
    float tenth_percentage;
} Stu;
// creating a short form of struct keyword using typedef function "stu"
class student_details{
    private : 
       vector<Stu> students;// using vectors for storing data of students for better memory management 
       public :
        void add_student();// fucntion for adding students in the database
};
// defining the function outside the class using scope resolution operator
void student_details :: add_student(){
    Stu s1; // s1 is a local variable 
    cout<<" ENTER THE FULL NAME OF THE STUDENT :";
    getline(cin , s1.name);
    
    cout<<" ENTER THE ENROLLMENT NUMBER OF THE STUDENT  : ";
    cin>>s1.enrollment_Number;
    
    cout<<" ENTER THE TENTH PERCENATGE OF THE STUDENT (DON'T USE % SYMBOL) :";
    cin>>s1.tenth_percentage;
    
    students.push_back(s1);



    cout<<" DATA ADDED SUCCESSFULLY"<<endl;
}
class streams_allocation : public student_details{

    
    public :
     void allocation(){
        float x;
        cout<<" ENTER YOUR TENTH PERCENTAGE :";
        cin>>x;
        if(x > 80.0 && x < 100.0){
            cout<<" YOU CAN CHOOSE ANY STREAM "<<endl;
            cout<< " 1. SCIENCE"<<endl;
            cout<< " 2. COMMERCE"<<endl;
            cout<< " 3. HUMANITIES"<<endl;
        }
        else if (x > 65.0 && x < 80.0){
            cout<<" YOU CAN CHOOSE FROM GIVEN STREAM OPTIONS "<<endl;
            cout<< " 1. COMMERCE"<<endl;
            cout<< " 2. HUMANITIES"<<endl; 
        }
        else if(x > 45.0 && x < 65.0) {
            cout<<" YOU CAN CHOOSE HUMANITIES STREAM "<<endl;
        }
        else{
            cout<<" YOU ARE NOT ELLIGIBLE FOR ANY STREAM!!"<<endl;
        }
     }

};
int main(){

    student_details obj1;
    obj1.add_student();
    streams_allocation obj2;
    obj2.allocation();
    
    return 0;
}