#include "student.h"

//
Student::Student()
{
    cout<<"use default constructor"<<endl;
    cout<<"set gender of student"<< endl;
}
Student::Student(bool Gender)
{
    cout<<"use constructor with parametrs"<<endl;
    _Gender = Gender;
    if(_Gender)
        cout<<"gender of student: man"<<endl;
    else
        cout<<"gender of student: girl"<<endl;
}
void Student::setSurName(string SurName)
{
    _SurName = SurName;
}
string Student::getSurName()
{
    return _SurName;
}
//
void Student::setInstitute(string Institute)
{
    _Institute = Institute;
}
string Student::getInstitute()
{
    return _Institute;
}
//
void Student::setGroup(string Group)
{
    _Group = Group;
}
string Student::getGroup()
{
    return _Group;
}
//
void Student::setDate(string Date)
{
    _Date = Date;
}
string Student::getDate()
{
    return _Date;
}
//
void Student::setGPA(float GPA)
{
    _GPA = GPA;
}
float Student::getGPA()
{
    return _GPA;
}
//
void Student::setDebt(bool Debt)
{
    _Debt = Debt;
}
bool Student::getDebt()
{
    return _Debt;
}
//
void Student::Print()
{
    cout<<"Information of student "<<endl;
    cout<<"Surname "<<getSurName()<<endl;
    cout<<"Name of Institute "<<getInstitute()<<endl;
    cout<<"Group "<<getGroup()<<endl;
    cout<<"Data "<<getDate()<<endl;
    cout<<"GPA "<<getGPA()<<endl;
    if(_Debt)
        cout<<"have debts"<<endl;
    else
        cout<<"heven't debts"<<endl;
}
