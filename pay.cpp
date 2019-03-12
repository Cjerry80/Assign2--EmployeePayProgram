#include "person.cpp"
#include "person.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


void readData(int size, Person employeeamount[]);
void writeData(int amount,Person employeeamount[]);

int main(){

Person employeeamount[20];
int size = 6;


readData (size, employeeamount);
writeData (size, employeeamount);




return 0;
}

void readData (int size, Person employeeamount[]){
ifstream infile;
string fname;
string lname;
float hoursW;
float payr;
int i = 0;
infile.open("input.txt");

while(!infile.eof()){
infile >> fname >> lname >> hoursW >> payr;
employeeamount[i].setFirstName(fname);
employeeamount[i].setLastName(lname);
employeeamount[i].setHoursWorked(hoursW);
employeeamount[i].setPayRate(payr);
i++;

}

infile.close();


}

void writeData (int size, Person employeeamount[]){
ofstream outfile;
outfile.open("output.txt");

for (int i = 0; i < size; i++){
outfile << employeeamount[i].fullName() << " " << fixed << setprecision(2) << employeeamount[i].totalPay() << endl;

}

outfile.close();

}
