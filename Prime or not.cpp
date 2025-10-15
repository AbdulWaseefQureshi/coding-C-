//prime or not
#include<iostream>
using namespace std;
int main()
{
	int n,i,flag=0;
	cout<<"Enter a number:";
	cin>>n;
	for(i=2;i<=n;i++)
	{
		if(n%2==0)
		flag=1;
		break;
	}
	if(flag==0)
	{
		cout<<"Prime"<<endl;
	}
	else
	{
		cout<<"Not Prime"<<endl;
	}
	return 0;
}
