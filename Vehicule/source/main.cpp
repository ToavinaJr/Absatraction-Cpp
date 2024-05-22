#include "../header/Auto.hpp"
#include "../header/Moto.hpp"
#include <iostream>

int main()
{
	Auto *automobile = new Auto;

	automobile->setConducteur("Balita");
	automobile->setMarque("Karenjy");
	automobile->setNombreRoue(4);
	automobile->setVitesse(90.5);

	automobile->conduire();
	
	delete automobile;

	std::cout << std::endl;

	Moto *moto = new Moto;

	moto->setConducteur("Toavina");
	moto->setMarque("Yamaha");
	moto->setVitesse(50.5);
	moto->setNombreRoue(2);

	moto->conduire();

	delete moto;

	return 0;
}
