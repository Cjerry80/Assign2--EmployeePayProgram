#include "person.h"
#include <iostream>

using namespace std;


Person::Person(){
firstName = " ";
lastName = " ";
payRate = 0.0;
hoursWorked = 0.0;

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
float totalpay;
totalpay = hoursWorked*payRate;
return totalpay;
}

string Person::fullName(){
string fullname;
fullname = firstName + " " + lastName;
return fullname;
}
