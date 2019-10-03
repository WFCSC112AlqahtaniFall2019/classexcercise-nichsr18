//
// Created by Sarah Nicholls on 10/3/19.
//
#include<string>
using namespace std;
class Faculty{
Faculty(){
    name="none";
    id="none";
    address="none";
    DoB="none";
    degree="none";
    setSalary(0);
    setSSN(0);
}

public:
string name;
string id;
string address;
string DoB;
string degree;
//getter and setter for salary
double getSalary() {return salary;}
void setSalary(double salary);
string getName(){return name;};
void setName(string name);
string getId(){return id;};
void setId(string name);
string getAddress(){return address;};
void setAddress(string address);
string getDoB(){return DoB;};
void setDoB(string DoB);
string getDegree(){return degree;};
void setDegree(string degree);
double getSSN(){return SSN;};
void setSSN(double SSN);
/* 1) create a getter and setter for each variable in the class*/

    Faculty(string n, string i, string ad, string date, string deg, double s, double ssn){
    name=n;
    id=i;
    address =ad;
    DoB=date;
    degree=deg;
    setSalary(s);
    setSSN(ssn);
    }

private:
double salary;
double SSN;
};
#ifndef CLASSEXCERCISE_FACULTY_H
#define CLASSEXCERCISE_FACULTY_H

#endif //CLASSEXCERCISE_FACULTY_H
