#include<iostream>

using namespace std;

int main() 
{
	//different types initialization and declaration
	
	int A[5];
	int B[5]={1,2,3,4,5};
	int C[10]={6,7};
	int D[]={8,9,10};

	A[0]=11; 
	A[1]=12;

	// different types of accessing array
	// using for loop,for each loop etc
	
	cout<<A[1]<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<B[i]<<" ";
        }
	cout<<endl;

	for(int x:C)
		cout<<x<<" ";
	cout<<endl;

	cout<<sizeof(D)<<endl;

	return 0;
}


