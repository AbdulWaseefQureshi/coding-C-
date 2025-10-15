//order of execution of constructor and destructor in inheritance
#include<iostream>
using namespace std;
class base
{
	public:
		base()
		{
			cout<<"Base class constructor called"<<endl;
		}
		~base()
		{
			cout<<"Base class destructor called"<<endl;
		}
};
class derived:public base
{
	public:
		derived()
		{
			cout<<"Derived class constructor called"<<endl;
		}
		~derived()
		{
			cout<<"Derived class destructor called"<<endl;
		}
};
int main()
{
	derived d;
	return 0;
}
