#include<iostream>
#include<stdio.h>

using namespace std;

struct Rectangle
{
	int length;
	int breadth;
};

int main()
{
	struct Rectangle r={10,5};
	cout<<"Area of Rectangle: ";
	cout<<r.length*r.breadth<<endl;

	return 0;
}
