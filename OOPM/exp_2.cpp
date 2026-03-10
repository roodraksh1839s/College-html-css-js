//WAP FOR SINGLE LEVEL INHERITENCE
#include<iostream>
using namespace std;

class Animal{
	public:
		void sound(){
			cout<<"\n Some sound.....";
		}
};
class Dog : public Animal{
	public:
		void sound(){
			Animal::sound();
			cout<<"\n Barks";
		}
};
int main(){
	Dog dg;
	dg.sound();
	return 0;
}
