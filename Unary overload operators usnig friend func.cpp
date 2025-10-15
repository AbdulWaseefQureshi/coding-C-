//unary overload using  frnd func
#include<iostream>
using namespace std;
class Number
{
	private:
		int value;
		public:
			//Constructor
			Number(int v=0)
			{
				value=v;
			}
			friend Number operator-(Number n);
			friend Number operator+(Number n1,Number n2);
			void display()const
			{
				cout<<"value="<<value<<endl;
			}
};
Number operator -(Number n)
{
	return Number(-n.value);
}
Number operator+(Number n1,Number n2)
{
	return Number (n1.value+n2.value);
}
int main()
{
	Number a(13),b(7),result;
	cout<<"Original values:"<<endl;
	a.display();
	b.display();
	result=a+b;
	cout<<"After Binary + Operator(a+b):"<<endl;
	result.display();
	result =-a;
	cout<<"After Unary -operator(-a):"<<endl;
	result.display();
	return 0;
}
