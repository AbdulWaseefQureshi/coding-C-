//Multiple inheritance
#include<iostream>
using namespace std;
class A
{
	public:
		void displayA()
		{
			cout<<"class A"<<endl;
		}
};
class B
{
	public:
		void displayB()
		{
			cout<<"class B"<<endl;
		}
};
class C:public A,public B
{
	public:
		void displayC()
		{
			cout<<"Class C"<<endl;
		}
};
int main()
{
	C objC;
	objC.displayA();
	objC.displayB();
	objC.displayC();
	return 0;
}
