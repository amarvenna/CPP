#include<iostream>

using namespace std;

class Rectangle
{
	private:
		int length;
		int breadth;
	public:
		Rectangle(int l,int b)
		{
			length=l;
			breadth=b;
		}
		int area()
		{
			return length*breadth;
		}
		int perimeter()
		{
			return 2*(length+breadth);
		}
		int changeLength(int l)
		{
			return length=l;
		}
};

int main()
{
	Rectangle r(10,20);
	cout<<"Area: "<<r.area()<<endl;
	cout<<"perimeter: "<<r.perimeter()<<endl;
	cout<<"new length: "<<r.changeLength(15)<<endl;

	return 0;
}
