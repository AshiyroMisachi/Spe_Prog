#ifndef DES_CPP
#define DES_CPP

#include "des.h"
#include <iostream>
#include <random>
using namespace std;

Des::Des(): _valeurDes(0), _garder("") {}

int Des::getValeur() {
	return _valeurDes;
}

void Des::attributionValeur() {
	_valeurDes = rand() % 6 + 1;
}

string Des::relance() {
	if (_garder == "garder") {
		return _garder;
	}
	else {
		return _garder;
	}
}

void Des::switchGarder() {
	_garder = "garder";
}

void Des::resetDes() {
	_valeurDes = 0;
	_garder = "";
}

#endif