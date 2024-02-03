#include<iostream>

using namespace std;

int main()
{
	int *p;
	p=new int[5]; //creating memory dynamically
	p[0]=1;
	p[1]=2;
	p[2]=3;
	p[3]=4;
	p[4]=5;

	for(int i=0;i<5;i++)
		cout<<p[i]<<" ";
	cout<<endl;

	delete []p; //deleting heap memory after its use
	
	return 0;
}
