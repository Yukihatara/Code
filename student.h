#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;
#include <string>
class Student
{
private:
    string _SurName;
    string _Institute;
    string _Group;
    string _Date;
    float _GPA;
    bool _Debt;
    bool _Gender; //for constructor with parametrs

public:
    void setSurName(string SurName);
    void setInstitute(string Institute);
    void setGroup(string Group);
    void setDate(string Date);
    void setGPA(float GPA);
    void setDebt(bool Debt);

    string getSurName();
    string getInstitute();
    string getGroup();
    string getDate();
    float getGPA();
    bool getDebt();

    void Print();
    Student();
    Student(bool Gender); //for constructor with parametrs
    //void Attraction();
};

#endif // STUDENT_H
