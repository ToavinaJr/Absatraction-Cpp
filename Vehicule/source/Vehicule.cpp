#ifndef __VEHICULE_CPP__
#define __VEHICULE_CPP__

#include "../header/Vehicule.hpp"
#include <string>

/***********************************/

void Vehicule::setMarque(std::string marque)
{
	this->marque = marque;
}

/***********************************/

void Vehicule::setVitesse(float vitesse)
{
	this->vitesse = vitesse;
}

/***********************************/

void Vehicule::setNombreRoue(int nombreRoue)
{
	this->nombreRoue = nombreRoue;
}

/***********************************/

std::string Vehicule::getMarque() const
{
	return marque;
}

/***********************************/

int Vehicule::getNombreRoue() const
{
	return nombreRoue;
}

/***********************************/

float Vehicule::getVitesse() const
{
	return vitesse;
}

/***********************************/

void Vehicule::setConducteur(std::string conducteur)
{
	this->conducteur = conducteur;
}

/***********************************/

std::string Vehicule::getConducteur()const
{
	return conducteur;
}

/***********************************/

#endif
