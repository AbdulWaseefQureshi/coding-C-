#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	double discriminant,root1,root2,realpart,imaginarypart;
	cout<<"enter coefficents a,b and c:";
	cin>>a>>b>>c;
	discriminant=b*b-4*a*c;
	if(discriminant>0)
	{
		root1=(-b+sqrt(discriminant))/(2*a);
		root2=(-b-sqrt(discriminant))/(2*a);
		cout<<"roots are real and different."<<endl;
		cout<<"root 1 ="<<root1<<endl;
		cout<<"root 2 ="<<root2<<endl;
	}
	else if(discriminant==0)
	{
		root1 =-b/(2*a);
		cout<<"roots are real and equal."<<endl;
		cout<<"root="<<root1<<endl;
	}
	else
	{
	realpart=-b/(2*a);
	imaginarypart=sqrt(-discriminant)/(2*a);
	cout<<"roots are complex and imaginary"<<endl;
	cout<<"root 1 ="<<realpart<<"+"<<imaginarypart<<"i"<<endl;
	cout<<"root 2 ="<<realpart<<"+"<<imaginarypart<<"i"<<endl;
	}
	return 0;
}
