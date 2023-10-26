#include <iostream>
using namespace std;
#include "Student.h"

int main()
{
    //Student Alex;  //redeclaration of 'Student Alex'
    Student Alex(1);
    Alex.setSurName("Katkov");
    Alex.setInstitute("IRITS");
    Alex.setGroup("UTS-21-1-o");
    Alex.setDate("01.09.2021");
    Alex.setGPA(4.67);
    Alex.setDebt(0);
    Alex.Print();

    cout<<">-----------<"<<endl;

    Student Max(Alex);
    Max.setSurName("Mohnachev");
    Max.setGroup("UTS-21-2-o");
    Max.setGPA(4.59);
    Max.Print();

    cout<<"Tape of keys for exit.\n";
}
