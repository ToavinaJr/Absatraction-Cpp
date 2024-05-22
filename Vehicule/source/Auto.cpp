#ifndef __AUTO_CPP__
#define __AUTO_CPP__

#include "../header/Auto.hpp"
#include <iostream>

/***********************************/

Auto::Auto()
{
	std::cout << "Création d'un automobile" << std::endl;
}

/***********************************/

void Auto::conduire() const
{
	std::cout 	<< conducteur << " conduit une automobile de marque " << marque 
				<< " qui a " << nombreRoue << " roues avec une vitesse de "
				<< vitesse << " km/h" << std::endl;
}

/***********************************/

Auto::~Auto()
{
	std::cout << "Déstruction d'un automobile" << std::endl;
}

/***********************************/

#endif
