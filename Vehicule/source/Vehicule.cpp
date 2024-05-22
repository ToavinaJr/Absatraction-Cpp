#ifndef __VEHICULE_CPP__
#define __VEHICULE_CPP__

#include "../header/Vehicule.hpp"
#include <string>

void Vehicule::setMarque(std::string marque)
{
	this->marque = marque;
}

std::string Vehicule::getMarque()
{
	return marque;
}

#endif
