//object as a class number
#include<iostream>
using namespace std;
class A 
{
	public:
		int x;
		A()
		{
			x=20;
			cout<<"\n In A constructor";
		}
};
class B 
{
public:
		int Y;
		A a;
		B()
		{
			cout<<"\n In B constructor";
		}
		void show()
		{
			cout<<"\nX="<<a.x<<"\tY="<<Y;
		}	
};
int main()
{
	B b;
	b.show();
	return 0;
}
