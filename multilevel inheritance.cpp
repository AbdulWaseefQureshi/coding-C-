//multilevel
#include<iostream>
using namespace std;
class Vehicle
{
	public:
		void move()
		{
			cout<<"Vehicle is moving."<<endl;
		}
};
class car:public Vehicle
{
	public:
		void start()
		{
			cout<<"car started."<<endl;
		}
};
class sportscar:public car
{
	public:
		void speed()
		{
			cout<<"sports car moves speed."<<endl;
		}
};
int main()
{
	sportscar objsportscar;
	objsportscar.move();
	objsportscar.start();
	objsportscar.speed();
	return 0;
}
