#include<iostream>

using namespace std;

void Swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int x,y;
	x=15;
	y=21;
	cout<<"Values before swap: "<<x<<" "<<y<<endl;
	Swap(&x,&y);
	cout<<"Values after swap: "<<x<<" "<<y<<endl;

	return 0;
}

	
