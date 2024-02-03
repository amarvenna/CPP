#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Enter size of array:";	cin>>n;

	int A[n];
	A[0]=21;A[1]=15;A[2]=28;

	for(int x:A)
		cout<<x<<" ";
	cout<<endl;

	return 0;
}
