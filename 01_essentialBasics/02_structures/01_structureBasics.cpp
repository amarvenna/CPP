#include<iostream>
#include<stdio.h>

using namespace std;

struct Student
{
	int rollNo;
        double marks;
}s1;

struct Student s2;

//here s1,s2 are  declared globally

int main()
{
	struct Student s3;
	struct Student s4={4,20};

	s3.rollNo=3;
	s3.marks=17.5;

	s2.rollNo=2;
	s2.marks=15;

	s1.rollNo=1;
	s1.marks=25;

	cout<<s1.rollNo<<" "<<s1.marks<<endl;
	cout<<s2.rollNo<<" "<<s2.marks<<endl;
	cout<<s3.rollNo<<" "<<s3.marks<<endl;
        cout<<s4.rollNo<<" "<<s4.marks<<endl;

	return 0;
}

