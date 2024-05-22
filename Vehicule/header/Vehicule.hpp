#ifndef __VEHICULE_HPP__
#define __VEHICULE_HPP__

#include <string>

class Vehicule
{
	public:
		virtual void conduire() = 0;
		void setMarque(std::string marque);
		std::string getMarque();
		
	private:
		std::string marque;
};

#endif
