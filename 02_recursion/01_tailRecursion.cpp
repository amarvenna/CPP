#include<iostream>

using namespace std;

void tailRecursion(int n)
{
	if(n>0)
	{
                cout<<n<<endl;
	        tailRecursion(n-1);
	}
}

int main()
{
	int n=3;
	tailRecursion(n);
        return 0;
}

