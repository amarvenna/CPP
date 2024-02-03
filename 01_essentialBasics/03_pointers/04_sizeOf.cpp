#include<iostream>

using namespace std;

int main()
{
	int A=10;
	int *p; //address variable
	p=&A;

	cout<<sizeof(p)<<endl;

	return 0;
}
