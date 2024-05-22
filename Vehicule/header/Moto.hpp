#ifndef __MOTO_HPP__
#define __MOTO_HPP__

#include "./Vehicule.hpp"

class Moto : public Vehicule
{
	public:
		Moto();
		~Moto();
		void conduire() const;
};

#endif
