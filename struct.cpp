#include<iostream>
using namespace std;

struct college_info{
      char name[15];
      int roll;
      char dept[50];
};

int main()
{
      struct college_info college;

      cout<<"\n....Enter the College Information....\n ";
      cout<<"Name of the student: ";
      cin>>college.name;
      cout<<"College Roll No: ";
      cin>>college.roll;
      cout<<"Department name: ";
      cin>>college.dept;

      cout<<"\n\n******College Information******\n\n";
      cout<<"Name of the Student: "<<college.name;
      cout<<"\nCollege Roll No: "<<college.roll;
      cout<<"\nNAme of the Department: "<<college.dept;
      cout<<"\n\n";

      return 0;
}