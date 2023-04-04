#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
using namespace std;

class Player {

private:
	vector<int> valeur;
	int valeur_total;

public:
	Player();
	int getValeur(int numero);
	int getValeur_total();
	int replaceValeur(int numero, int score);
};

#endif