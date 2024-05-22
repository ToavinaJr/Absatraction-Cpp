#ifndef __VEHICULE_HPP__
#define __VEHICULE_HPP__

#include <string>

// LA classe vehicule est une classe abstraite
class Vehicule
{
	public:
		// La méthode abstraite de la classe vehicule
		virtual void conduire() const = 0;

		// Les setteurs de la classe
		void setNombreRoue(int nombreRoue);
		void setVitesse(float vitesse);
		void setConducteur(std::string );
		void setMarque(std::string marque);

		// Les getteurs de la classe
		std::string getMarque() const;
		std::string getConducteur() const;
		int getNombreRoue() const;
		float getVitesse() const;

	protected:
		int nombreRoue;
		float vitesse;
		std::string marque;
		std::string conducteur;
};

#endif
