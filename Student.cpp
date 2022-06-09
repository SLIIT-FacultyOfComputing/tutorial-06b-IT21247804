#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;
// Assign studentId and name
void Student::assigndetails(int sID,const char sname[]) {
  studentID = sID;
  strcpy(name,sname);
  
}

// Display StudentId and Name
void Student::display() {
  cout<< "student ID:"<< studentID<<endl;
  cout<< "student name:"<< name<<endl;
  
}
