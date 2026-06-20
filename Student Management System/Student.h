#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <iostream>

struct Student {};

class Linkedlist {
  private:
    Student *head;

  public:

    Linkedlist();

    void insertFirst(int ID, string Name, int Age, float GPA, float Grades0, float Grades1);

    void insertAtEnd(int ID, string Name, int Age, float GPA, float Grades0, float Grades1);

    void deleteFromBeginning();

    void deleteFromEnd();

    void print();

};

#endif // STUDENT_H_INCLUDED
