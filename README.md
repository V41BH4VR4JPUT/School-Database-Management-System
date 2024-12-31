# School-Database-Management-System
Project Description
The School Database Management System is a C++ program designed to manage student records and allocate streams for 11th standard students based on their 10th-grade performance. This project uses Object-Oriented Programming (OOP) concepts and the Standard Template Library (STL) for efficient memory and data management.
________________________________________
Features
1.	Add Student Records
   o	Add a new student's name, enrollment number, and 10th-grade percentage to the database.
2.	Display Student Records
   o	View all student records in a structured tabular format.
3.	Delete Student Records
   o	Delete a student record from the database using the enrollment number.
4.	Update Student Records
   o	Update the name or 10th-grade percentage of a student using their enrollment number.
5.	Stream Allocation
   o	Suggest appropriate streams (Science, Commerce, or Humanities) for 11th standard based on the student's 10th-grade percentage:
     	Above 80%: Any stream.
     	65% to 80%: Commerce or Humanities.
     	45% to 65%: Humanities only.
     	Below 45%: Not eligible for any stream.
6.	Menu-Driven Interface
   o	A user-friendly interface to navigate through the program options.
________________________________________
Program Structure
Classes and Functions
1.	Stu Struct
   o	Holds the details of each student: name, enrollment_Number, and tenth_percentage.
2.	student_details Class
   o	Manages student records using a vector for dynamic memory allocation.
   o	Key functions:
     	add_student(): Adds a new student.
     	Display(): Displays all student records.
     	Delete_student(): Deletes a student record.
     	update_student(): Updates a student's details.
3.	streams_allocation Class
   o	Allocates streams based on the 10th-grade percentage using predefined rules.
4.	Main Function
   o	Implements a menu-driven system to interact with the program.
________________________________________
How to Run
1.	Clone the repository or download the code file.
2.	Open the code in any C++ IDE or editor.
3.	Compile the code using a C++ compiler (e.g., g++).
   g++ -o school_db_management system.cpp
4.	Run the executable:
   ./school_db_management
5.	Follow the menu options to perform various operations.
________________________________________
Example Menu

*****-------------------------------------------------------------------*********
         WELCOME TO THE SCHOOL DATABASE MANAGEMENT SYSTEM 
         1. ADD DATA 
         2. DISPLAY DATA 
         3. DELETE DATA 
         4. UPDATE DATA 
         5. STREAM ALLOCATION 
         6. EXIT 
*****-------------------------------------------------------------------*********
________________________________________
Technologies Used
 •	Language: C++
 •	Libraries:
   o	<bits/stdc++.h>: For including all standard libraries.
   o	STL: For efficient data management with vectors and iterators.



 
