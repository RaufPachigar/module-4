#include <iostream>
#include <string>
using namespace std;

class Person {

public:
	string name;
    int age;
    void initializePersonData() {
        cout << "Enter person's name: ";
        cin >> name;
        cout << "Enter person's age: ";
        cin >> age;
    }

    void readPersonData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {

    
public:
	float percentage;
    void initializeStudentData() {
        initializePersonData();
        cout << "Enter student's percentage: ";
        cin >> percentage;
    }

    void readStudentData() {
        readPersonData();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
   
public:
	float salary;
    void initializeTeacherData() {
        initializePersonData();
        cout << "Enter teacher's salary: ";
        cin >> salary;
    }

    void readTeacherData() {
        readPersonData();
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Student student;
    Teacher teacher;

    cout << "Enter student details:\n";
    student.initializeStudentData();

    cout << "\nEnter teacher details:\n";
    teacher.initializeTeacherData();

    cout << "\nStudent details:\n";
    student.readStudentData();

    cout << "\nTeacher details:\n";
    teacher.readTeacherData();

    return 0;
}

