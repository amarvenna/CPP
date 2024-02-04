#include<iostream>

using namespace std;

struct Rectangle
{
	int length;
	int breadth;
};

struct Rectangle* fun()
{
	struct Rectangle *p=new Rectangle;
	p->length=10;
	p->breadth=15;
	return p;
}

int main()
{
	struct Rectangle *ptr=fun();
	
	cout<<ptr->length<<" "<<ptr->breadth<<endl;

	return 0;
}
