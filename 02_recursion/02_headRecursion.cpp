#include<iostream>

using namespace std;

void headRecursion(int n)
{
	if(n>0)
	{
	        headRecursion(n-1);
		cout<<n<<endl;
	}
}

int main()
{
	int n=3;
	headRecursion(n);
        return 0;
}
