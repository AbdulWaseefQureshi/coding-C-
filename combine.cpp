#include<iostream>
using namespace std;
void greet(string name,string message="Hello")
{
	cout<<message<<","<<name<<"!"<<endl;
}
int main()
{
	greet("Alice");
	message:"Hello";
	greet("Bob","Good morning");
	return 0;
}
#include<iostream>
using namespace std;
class myClass
{
	public:
		int publicVar;
	private:
		int privateVar;
	protected:
		int protectedVar;
	public:
		void setprivateVar(int val) 
		{
			privateVar=val;
		}
		int getprivateVar()
		{
			return privateVar;
		}
};
int main()
{
	myClass obj;
	obj.publicVar=10;
	obj.setprivateVar(20);
	cout<<"public var:"<<obj.publicVar<<endl;
	cout<<"private var"<<obj.getprivateVar()<<endl;
	return 0;
}

