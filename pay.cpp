#include "person.cpp"
#include "person.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;


void readData(vector<Person> & employees);
void writeData(vector<Person> & employees);

int main(){

vector<Person>  employees;

readData(employees);
writeData(employees);


return 0;
}

void readData (vector<Person> & employees){
ifstream infile;
string fname;
string lname;
float hoursW;
float payr;
int i = 0;
string line = " ";
infile.open("input.txt");

while(!infile.eof()){
employees.emplace_back(fname,lname, payr, hoursW);
infile >> fname >> lname >> hoursW >> payr;
getline(infile, line);
employees.at(i).setFirstName(fname);
employees.at(i).setLastName(lname);
employees.at(i).setHoursWorked(hoursW);
employees.at(i).setPayRate(payr);
i++;

}

infile.close();


}

void writeData (vector<Person> & employees){
ofstream outfile;
outfile.open("output.txt");

for (int i = 0; i < employees.size(); i++){
outfile << employees.at(i).fullName() << " " << fixed << setprecision(2) << employees.at(i).totalPay() << endl;

}

outfile.close();

}
