#include<iostream>

using namespace std;

struct Rectangle
{
	int length;
	int breadth;
};

int main()
{
       	Rectangle *p;
	p=new Rectangle;
	p->length=4;
	p->breadth=5;
	cout<<p->length*p->breadth<<endl;

	return 0;
}
