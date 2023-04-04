#ifndef DES_H
#define DES_H

#include <string>
using namespace std;

class Des {

private:
	int _valeurDes;
	string _garder;

public:
	Des();
	int getValeur();
	void attributionValeur();
	string relance();
	void switchGarder();
	void resetDes();
};

#endif