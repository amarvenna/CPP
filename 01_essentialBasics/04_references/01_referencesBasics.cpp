#include<iostream>

using namespace std;

int main()
{
	int a=10;
	int &r=a;
	cout<<"The value of a is: "<<a<<endl;
	cout<<"The value of r is: "<<r<<endl;
        int c=20; //new variable created
        c=r; //new variable is assigned to r
        cout<<"The value of c is: "<<c<<endl;
        cout<<"The value of r is: "<<r<<endl;
	return 0;
}
