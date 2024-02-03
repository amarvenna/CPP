#include<iostream>

using namespace std;

int main()
{
	int A[5]={1,2,3,4,5};
	int *p;

	p=A;

	// you can also assign like this p=&A[0];
	// but this is wrong p=&A;
	
        for(int i=0;i<5;i++)
	{
		cout<<p[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<5;i++)
        {
                cout<<A[i]<<" ";
        }
        cout<<endl;

	return 0;
}

