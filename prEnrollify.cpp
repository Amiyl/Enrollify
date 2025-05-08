//****************************
//project Title: Enrollify
//purpose:       Create sceduling symmetry for major
// Author:       Amiyl Naimzadeh
//Date:          Sept. 5 2024
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
#include College.h
#include Courses.h
#include Majors.h
#include Student.h

void welcome();
void loadstudents(vector <Student> s);
void loadColleges(vector <Colleges> c);
void loadMajors(vector <> s);
void loadCourse();
int login (vector <Student> s);
void symmetry();
void updateRecords();



int main(){

    vector <Student> enrollees;
    vector <Colleges> schools;
    vector <Course> courses;
    vector <Major> majors;
    int liu= -1;

// Courses

// Colleges

//Students

//Display Courses on Schedule (All or by Major)
welcome();
loadstudents();
liu = login(enrollees);
symmetry();
updateRecords();



    return 0;

}

void welcome () {
    
}
void loadstudents() {
    
    // open a file in read mode.
ifstream infile;
infile.open("Students.dat");
int sindex = 0;
Student enrollee;

cout << "Reading from the file" << endl;
string line; /could read the whole then separate
string s, s2, s3, c, m, p;
while(!infile.eof() )
{
getline(infile,s, ',');
getline(infile,s2,',');
getline(infile,s3,',');
getline(infile,c,',');
getline(infile,m,',');
getline(infile,p,',');

enrollees.StudentID =s;
enrollees.StudentName =s2;
enrollees.StudentEmail =s3;
enrollees.collegeCode = stoi(c);
enrollees.majorCode = stoi(m);
enrollees.passWord = p;

enrollees.push_back(enrollee);

coursesindex++;
}
infile.close();
}

void loadstudents() {
    
    // open a file in read mode.
ifstream infile;
infile.open("Students.dat");
int sindex = 0;
Student enrollee;

cout << "Reading from the file" << endl;
string line; /could read the whole then separate
string s, s2, s3, c, m, p;
while(!infile.eof() )
{
getline(infile,s, ',');
getline(infile,s2,',');
getline(infile,s3,',');
getline(infile,c,',');
getline(infile,m,',');
getline(infile,p,',');

enrollees.StudentID =s;
enrollees.StudentName =s2;
enrollees.StudentEmail =s3;
enrollees.collegeCode = stoi(c);
enrollees.majorCode = stoi(m);
enrollees.passWord = p;

enrollees.push_back(enrollee);

coursesindex++;
}
infile.close();
}
do{
int login(vector s) {
int numatts =0;
string entEmail = "", entPass ='';
bool loginOk = fasle;
getline(cin, entEmail);
getline(cin, entPass);
for (int u =0; u < s.size(); u++){}
if(entEmail==s.at(u).studentEmail && entPass == s.at(u).password)
{
    
    loginOk =true;

}
MessageBox.Show("Nukmber of Attempts Exceede")
}
while (numatts < 3 ||login)
{
    /* code */
}

}
}
}