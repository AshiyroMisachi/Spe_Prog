#ifndef PLAYER_CPP
#define PLAYER_CPP

#include "player.h"
#include <iostream>
#include <random>
using namespace std;

Player::Player():valeur(6, -1), valeur_total(0) {}

int Player::getValeur(int numero) {
	return valeur[numero - 1];
}

int Player::getValeur_total() {
	valeur_total = valeur[0] + valeur[1] + valeur[2] + valeur[3] + valeur[4] + valeur[5];
	return valeur_total;
}

bool Player::replaceValeur(int numero, int score) {
	if (valeur[numero] != -1) {
		cout << "Valeur déjà occupé" << endl;
		return false;
	}
	else {
		valeur[numero] = score;
		return true;
	}
}

#endif