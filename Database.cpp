/*
Experiment Number 2 : Develop a program in C++ to create a database of
student’s information system
containing the following information: Name, Roll number, Class, Division,
Date of Birth, Blood group,
Contactaddress, Telephone number, Driving license no. and other. Construct
the database with
suitable member functions. Make use of constructor, default constructor,
copy constructor,
destructor, static member functions, friend class, this pointer, inline
code and dynamic
memory allocation operators-new and delete as well as exception handling.
*/
#include<iostream>
#include<string>
using namespace std;
class student
{
private:
 string name,dob,bloodgrp,addr,yearclass,mob;
 int div;
 int *rollno;
public:
 friend class faculty;
 student()
 { rollno = new int;
 *rollno = div =-1;
 name = bloodgrp=dob=addr=yearclass=mob="";
 }
~student()
{
delete rollno; //deallocation
}
void adddata()
{
 cout<<"\nenter the student information:"<<endl;
 cin.ignore();
 cout<<"enter a name of student:";
 cin>>name;
 cout<<"enter the Rollno: ";
 cin>>*rollno;
 cout<<"enter a year of student:";
 cin>>yearclass;
 cout<< "enter divison (1/2/3/4/5):";
 cin>>div;
 cout<<"enter the birth date: "<<endl;
 cin>>dob;
 cout<<"enter the blood group: ";
 cin>>bloodgrp;
 cout<<"enter the phone number: ";
 cin>>mob;
 cout<<"enter the address: ";
 cin>>addr;
}
void display()
{
 cout<<"\n-----------------------------------";
 cout<<"\n Name :"<<name;
 cout<<"\nRoll No :"<< *rollno;
 cout<<"\nYear(SE/TE/BE):"<<yearclass;
 cout<<"\nDiv(1/2/3/4/5):"<<div;
 cout<<"\nbirth date:"<<dob;
 cout<<"\nBlood Group :"<<bloodgrp;
 cout<<"\nMobile Number :"<<mob;
 cout<<"\nAddress :"<<addr;
 cout<<"\n------------------------------------";
}
 static void header()
 {
 cout<<"\n * * * Student Information System * * *";
 }
};
class faculty
{
private:
 int id;
public:
 faculty()
 {
 id = 000;
 }
 faculty(const faculty &f1)
 {
 id = f1.id;
 }
 void fdisplay(student &obj,int f_d)
 {
 try
 {
 if (obj.div == f_d)
 obj.display();
 else
 throw( obj.div);
 }
 catch( int x)
 {
 cout<<"\n Invalid Divison....";
 }
 }
};
int main() {
 student st[5];
 faculty f;
 int ch=0,count=0;
 do
 {
 cout<<"\n * * * Student information system *";
 cout<<"\n * * * Menu * * *";
 cout<<"\n 1.Add Information ";
 cout<<"\n 2. Display Information ";
 cout<<"\n 3. Faculty wise Information";
 cout<<"\n 4. Exit ";
 cout<<"\n Enter choice : ";
 cin>>ch;
 switch(ch)
 {
 case 1: st[count].adddata();
 count++;
 break;
 case 2:
 for (int j=0;j<count;j++)
 {
 student::header();
 st[j].display();
 }
 break;
 case 3:
 int f_div;
 cout<<"\n enter Divison of Faculty: ";
 cin>> f_div;
 for ( int j=0;j<count;j++)
 {
 cout<<"\n * * * Student Information System (Faculty RAS) * * *";
 f.fdisplay(st[j],f_div);
 }                                          
 break;
 case 4:
 exit(0);
 }
 }while ( ch!= 4);
 return 0;
 }
