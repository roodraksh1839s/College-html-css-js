#include<iostream>
using namespace std;

class Vehicle{
	public:
		void vehicletype(){
			cout<<"vehicle type..\n";
		}
};
class Car  : public Vehicle{
	public:
		void cartype(){
			cout<<" Car .. ";
		}
};
class Sedan : public Car{
	public:
		void model(){
			cout<<"\n Sedan";
		}
};

int main(){
	Sedan sd;
	sd.vehicletype();
	sd.cartype();
	sd.model();

return 0;
}

