#include<iostream>

using namespace std;

struct Rectangle
{
	int length;
	int breadth;
};

int main()
{
	Rectangle r={10,20};
       	Rectangle *p=&r;
	cout<<p->length*p->breadth<<endl;

	return 0;
}
