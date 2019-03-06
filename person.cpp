#include "person.h"
#include <iostream>

using namespace std;
/*class Person
{
private:
    string lastName;
    string firstName;
    float  payRate;
    float  hoursWorked;
public:
    Person();
    void setLastName(string lName);
    string getLastName();
    void setFirstName(string fName);
    string getFirstName();
    void setPayRate(float rate);
    float getPayRate();
    void setHoursWorked(float hours);
    float getHoursWorked();
    float totalPay();
    string fullName();
};*/


Person::Person(){
}

void Person::setLastName(string lName){
lastName = lName;
}

string Person::getLastName(){
return lastName;
}

void Person::setFirstName(string fName){
firstName = fName;
}

string Person::getFirstName(){
return firstName;
}

void Person::setPayRate(float rate){
payRate = rate;
}

float Person::getPayRate(){
return payRate;
}

void Person::setHoursWorked(float hours){
hoursWorked = hours;
}

float Person::getHoursWorked(){
return hoursWorked;
}

float Person::totalPay(){
double totalpay;
totalpay = hoursWorked*payRate;
return totalpay;
}

string Person::fullName(){
string fullname;
fullname = firstName + " " + lastName;
return fullname;
}
