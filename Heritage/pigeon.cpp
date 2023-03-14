#ifndef PIGEON_CPP
#define PIGEON_CPP

#include "pigeon.h"
#include <random>
#include <iostream>

Pigeon::Pigeon() : cri("roucoule"), espece("pigeon")  {}
Pigeon::Pigeon(std::string nom) : cri("roucoule"), espece("pigeon") {
	name = nom;
}

std::string Pigeon::getCri() {
	return cri;
}

std::string Pigeon::getEspece() {
	return espece;
}

void Pigeon::event() const {
	std::random_device dev;
	std::mt19937 rng(dev());
	std::uniform_int_distribution<std::mt19937::result_type> randomEvent(0, 60);
	int eventR = randomEvent(rng);
	if (eventR >= 40) {
		std::cout << name << " fait le Azir" << std::endl;
	}
	else if (eventR >= 20) {
		std::cout << name << " guette la fenetre" << std::endl;
	}
	else {
		std::cout << name << " picore ta mère" << std::endl;
	}
	return;
}

#endif