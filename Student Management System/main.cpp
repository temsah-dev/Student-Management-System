#include <iostream>
//#include "C:/Project DS/Student Management System/Student.h"
using namespace std;

struct Student{
    int ID;
    string Name;
    int Age;
    float GPA=0.00;//غلط بس هكمل عليه
    Student* next;
    float Grades[2];//غلط بس هكمل عليه
};

class Linkedlist {
    Student *head;

  public:

    Linkedlist() {
        head = NULL;
    }

    void insertFirst(int ID, string Name, int Age, float GPA, float Grades0, float Grades1) {

        Student* newStudent = new Student();
        newStudent->ID = ID;
        newStudent->Name = Name;
        newStudent->Age = Age;
        newStudent->GPA = GPA;
        newStudent->Grades[0] = Grades0;
        newStudent->Grades[1] = Grades1;

        newStudent->next = head;
        head = newStudent;
    }

    void insertAtEnd(int ID, string Name, int Age, float GPA, float Grades0, float Grades1) {

        Student* newStudent = new Student();

        newStudent->ID = ID;
        newStudent->Name = Name;
        newStudent->Age = Age;
        newStudent->GPA = GPA;
        newStudent->Grades[0] = Grades0;
        newStudent->Grades[1] = Grades1;
        newStudent->next = NULL;

        if (!head) {
            head = newStudent;
            return;
        }

        Student* temp = head;
        while (temp->next) {
            temp = temp->next;
        }

        temp->next = newStudent;
    }

    void deleteFromBeginning() {
        if (!head) {
            cout << "List is empty." << endl;
            return;
        }

        Student* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteFromEnd() {
        if (!head) {
            cout << "List is empty." << endl;
            return;
        }

        if (!head->next) {
            delete head;
            head = NULL;
            return;
        }

        // Traverse to the second-to-last Student
        Student* temp = head;
        while (temp->next->next) {
            temp = temp->next;
        }

        //  Delete the last Student
        delete temp->next;
        // Set the second-to-last Student's next to NULL
        temp->next = NULL;
    }

    void print() {
        Student *temp = head;

        if (head == NULL) {
            cout << "List empty" << endl;
            return;
        }
        cout << "    ID    ";
        cout << "    Name    ";
        cout << "    Age    ";
        cout << "    GPA    ";
        cout << "    Grades[0]    ";
        cout << "    Grades[1]    ";

        while (temp != NULL) {
            cout <<endl;
            cout << temp->ID   << "    ";
            cout << temp->Name << "    ";
            cout << temp->Age  << "    ";
            cout << temp->GPA  << "    ";
            cout << temp->Grades[0] << "    ";
            cout << temp->Grades[1] << "    ";
            temp = temp->next;
        }
    }

};

void addStudent(){

}

void deleteStudent(){

}

void searchStudent(){

}

void updateStudent(){

}

void sortStudents(){

}

void displayStudents(){

}

void exitProgram(){

}

void menu(){

    int choose;
    cout << "\n---- Student Management System ----\n";
    cout << "1. Add Student\n";
    cout << "2. Delete Student\n";
    cout << "3. Search Student\n";
    cout << "4. Update Student\n";
    cout << "5. Display Students\n";
    cout << "6. Sort Students\n";
    cout << "0. Exit\n";
    cout << "-----------------------------------\n";
    cin >> choose;



}


int main() {


    char choose;
    cout << "\n---- Student Management System ----\n";
    cout << "1. Add Student\n";
    cout << "2. Delete Student\n";
    cout << "3. Search Student\n";

    cout << "4. Update Student\n";
    cout << "5. Display Students\n";
    cout << "6. Sort Students\n";
    cout << "0. Exit\n";
    cout << "-----------------------------------\n";

    cin >> choose;

    switch(choose) {
      case 1:
        addStudent();
        break;
      case 2:
        deleteStudent();
        break;
      case 3:
        searchStudent();
        break;
      case 4:
        updateStudent();
        break;
      case 5:
        displayStudents();
        break;
      case 6:
        sortStudents();
        break;
      case 0:
        exitProgram();
        break;
      default:
        menu();
    }

    return 0;
}

/*
    Linkedlist list;

    list.insertFirst(1, "Abdou", 19, 0.99, 1, 5);
    list.insertFirst(2, "Ahmed", 19, 1.99, 10, 12);
    list.insertFirst(3, "Ibrahim", 19, 2.99, 60, 50);
    list.insertFirst(4, "Temsah", 19, 3.99, 100, 100);

    cout << "Elements of the list are: \n";

    // Print the list
    list.print();
    cout << endl;
    */
