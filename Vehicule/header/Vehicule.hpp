#ifndef __VEHICULE_HPP__
#define __VEHICULE_HPP__

#include <string>

class Vehicule
{
	public:
		virtual void conduire() const = 0;

		void setMarque(std::string marque);
		void setNombreRoue(int nombreRoue);
		void setVitesse(float vitesse);
		void setConducteur(std::string );

		std::string getMarque() const;
		std::string getConducteur() const;
		int getNombreRoue() const;
		float getVitesse() const;

	protected:
		std::string marque;
		int nombreRoue;
		float vitesse;
		std::string conducteur;
};

#endif
