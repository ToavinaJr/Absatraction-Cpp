#include "../header/Auto.hpp"
#include "../header/Moto.hpp"

int main()
{
	Auto *automobile = new Auto;
	Moto *moto = new Moto;
	
	automobile->conduire();
	moto->conduire();
	
	delete automobile;
	delete moto;
	
	return 0;
}
