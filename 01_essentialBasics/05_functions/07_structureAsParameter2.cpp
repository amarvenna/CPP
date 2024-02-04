#include<iostream>

using namespace std;

struct Rectangle
{
	int length;
	int breadth;
};

int Area(struct Rectangle &x)
{
	return x.length*x.breadth;
}

int main()
{
	Rectangle r={12,11};
	cout<<Area(r)<<endl;
}
