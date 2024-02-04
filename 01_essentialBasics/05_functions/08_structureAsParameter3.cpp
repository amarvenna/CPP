#include<iostream>

using namespace std;

struct Rectangle
{
	int length;
	int breadth;
};

int changeLength(struct Rectangle *p,int l)
{
	return p->length=l;
}

int main()
{
	Rectangle r={12,11};
	changeLength(&r,10);
	cout<<"New Length is: "<<r.length<<endl;

	return 0;
}
