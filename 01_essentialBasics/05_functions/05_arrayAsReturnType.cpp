#include<iostream>

using namespace std;

int* createArray(int n)
{
	int *newArray=new int[n];
	for(int i=0;i<n;i++)
	{
		newArray[i]=i+1;
	}
	return newArray;
}

int main()
{
	int size=10;
	int *myArray = createArray(size);
	for(int i=0;i<size;i++)
		cout<<myArray[i]<<" ";
        cout<<endl;
	return 0;
}
