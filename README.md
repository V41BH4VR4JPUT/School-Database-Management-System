# School Management System

This repository contains a **School Management System** built using C++ that incorporates Object-Oriented Programming (OOP) principles and STL (Standard Template Library). The project provides an efficient way to manage student data and assign academic streams based on their 10th-grade performance.

---

## Key Features

1. **Student Management**  
   - Add new students with details like name, enrollment number, and 10th percentage.  
   - Update existing student records.  
   - Delete student records using their enrollment number.  
   - View all student data in a tabular format.

2. **Stream Allocation**  
   - Automatically suggests streams based on the 10th-grade percentage:  
     - **Science, Commerce, Humanities**: Percentage > 80  
     - **Commerce, Humanities**: Percentage between 65 and 80 (inclusive)  
     - **Humanities**: Percentage between 45 and 65 (inclusive)  
     - **Not Eligible**: Percentage < 45  

3. **Interactive Menu-Driven Interface**  
   - User-friendly menu for performing CRUD operations and stream allocation.

---

## Technologies Used

- **Programming Language:** C++  
- **Concepts:**  
  - Object-Oriented Programming (Classes, Objects, Encapsulation, Abstraction)  
  - STL (`vector`, `find_if`) for dynamic data storage and searching.  
- **Libraries:** iostream, iomanip, vector, algorithm  

---

## Code Highlights

### **Key Classes and Methods**
- **`class student_details`**  
  Manages student information with the following methods:  
  - `add_student()` - Adds a new student to the database.  
  - `Display()` - Displays all student records.  
  - `update_student(int enrollment_Number)` - Updates an existing record by enrollment number.  
  - `Delete_student(int enrollment_Number)` - Deletes a student record.  

- **`class streams_allocation`**  
  Allocates academic streams based on the student's performance:  
  - `allocation()` - Determines available streams based on 10th-grade percentage.

---










 
