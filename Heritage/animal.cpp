#ifndef ANIMAL_CPP
#define ANIMAL_CPP

#include "animal.h"
#include <iostream>

Animal::Animal() : name("Toto"), bonheur(50), faim(5) {}
Animal::Animal(std::string nom) : name(nom), bonheur(50), faim(5) {}

std::string Animal::getName() {
	return name;
}

int Animal::getBonheur() {
	return bonheur;
}

void Animal::nourir() {

}

void Animal::verifFaim() {

}

void Animal::carresser() {

}

void Animal::gronder() {

}

void Animal::pecher() {

}

void Animal::jouer() {

}

void Animal::event() const{
	return;
}
#endif