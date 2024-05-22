#ifndef __MOTO_CPP__
#define __MOTO_CPP__

#include "../header/Moto.hpp"
#include <iostream>

/***********************************/

Moto::Moto()
{
	std::cout << "Création d'un moto" << std::endl;
}

/***********************************/

void Moto::conduire() const
{
	std::cout 	<< conducteur << " conduit une moto de marque " << marque 
				<< " qui a " << nombreRoue << " roues avec une vitesse de "
				<< vitesse << " km/h" << std::endl;
}

/***********************************/

Moto::~Moto()
{
	std::cout << "Destruction d'un moto" << std::endl;
}

/***********************************/

#endif