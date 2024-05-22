#ifndef __AUTO_HPP__
#define __AUTO_HPP__

#include "Vehicule.hpp"

class Auto : public Vehicule
{
	public:
		void conduire()const;
		void afficher()const;

		Auto();
		~Auto();
	
	private:
		

};

#endif
