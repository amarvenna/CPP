#include<iostream>

using namespace std;

int Add(int a,int b)
{
        int c=a+b;
	return c;
}

int main()
{
	int x,y,z;
	x=10;
	y=11;
        z=Add(x,y);

	cout<<z<<endl;

	return 0;
}
