#ifndef PIGEON_H
#define PIGEON_H

#include "animal.h"
#include <string>

class Pigeon : public Animal {

private:
	std::string cri;
	std::string espece;

public:
	Pigeon();
	Pigeon(std::string nom);
	std::string getCri();
	std::string getEspece();
	void event() const;
};

#endif