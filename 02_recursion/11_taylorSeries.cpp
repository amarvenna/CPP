#include<iostream>

using namespace std;

double e(int x,int n)
{
	static double pow=1;
	static double fact=1;

	double result;
	
	if(n==0)
		return 1;
	else
	{
		result=e(x,n-1);
		pow=pow*x;
		fact=fact*n;
		return result+pow/fact;
	}
}

int main()
{
	cout<<e(1,10)<<"\n";
	return 0;
}
