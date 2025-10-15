// virtual base class
#include<iostream>
using namespace std;
class A
{
	public:
		void display()
		{
			cout<<"class A display()"<<endl;
		}
};
class B:virtual public A
{
	void show()
	{
		cout<<"class B show()"<<endl;
	}	
};
class c:virtual public A
{
	void look()
	{
		cout<<"class C look()"<<endl;
	}
};
class D:public B,public c
{
	// inherits A virtually via both B and c to avoid duplication
};
int main()
{
	D d;
	d.display();
	return 0;
}
