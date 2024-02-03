#include<iostream>

using namespace std;

void Print(int *A,int n)
{
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
	cout<<endl;
}

int main()
{
	int A[5]={1,2,3,4,5};
	Print(A,5);

	return 0;
}

