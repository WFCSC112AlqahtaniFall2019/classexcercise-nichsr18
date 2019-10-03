#include <iostream>
#include "Faculty.h"
using namespace std;

int main() {
    Faculty prof("Sarah", "06556026", "1834 Wake Forest Rd","06/01/00","Mathematics and Computer Science",10000,308967);
    cout<<"Professor Name: "<<prof.name<<endl;
    cout<<"ID: "<<prof.id<<endl;
    cout<<"Address: "<<prof.address<<endl;
    cout<<"Date of birth: "<<prof.DoB<<endl;
    cout<<"Degree: "<<prof.degree<<endl;
    cout<<"Salary: "<<prof.getSalary()<<endl;
    cout<<"SSN: "<<prof.getSSN()<<endl;

/* 3) use the implemented methods to fill prof' info and print them out */

    return 0;
}
