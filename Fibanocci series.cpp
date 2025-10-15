//fibanocci series
#include<iostream>
using namespace std;
int main()
{
	int n,i,f1=0,f2=1,f3;
	cout<<"enter fibanocci series:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<f1<<" ";
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	return 0;
}
