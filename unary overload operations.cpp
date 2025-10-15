//overload unary , and biinary operators using member function.
#include<iostream>
using namespace std;
class number{
	private:
		int value;
	public:
		number(int v=0){
			value=v;
		}
		number operator-(){
			return number(-value);
		}
		number operator+(const number &obj){
			return number(value+obj.value);
		}
		void display(){
			cout<<"value="<<value<<endl;
		}
};
int main()
{
	number n1(15),n2(29),result;
	cout<<"original values:"<<endl;
	n1.display();
	n2.display();
	result=n1+n2;
	cout<<"after binary+operator(n1+n2):"<<endl;
	result.display();
	result=-n1;
	cout<<"after unary-operator(-n1):"<<endl;
	result.display();
	return 0;
}
