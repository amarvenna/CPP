#include<iostream>

using namespace std;

template<class T>
class Rectangle
{
	private:
		T length;
		T breadth;
	public:
		Rectangle(T length,T breadth)
		{
			this->length=length;
			this->breadth=breadth;
		}
		T area()
		{
			return length*breadth;
		}
		T perimeter()
		{
			return 2*(length+breadth);
		}
		T changeLength(T l)
		{
			return length=l;
		}
};

int main()
{
	Rectangle<int> r(10,20);
	cout<<"Area: "<<r.area()<<endl;
	cout<<"perimeter: "<<r.perimeter()<<endl;
	cout<<"new length: "<<r.changeLength(15)<<endl;

	return 0;
}
