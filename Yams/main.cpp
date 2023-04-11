#include <iostream>
#include <string>
#include <vector>
#include "des.h"
#include "player.h"
using namespace std;

int main() {
	srand((unsigned int)time(0));
	string selection = "";
	string choix = "";
	vector<string> chiffre = { "1", "2", "3", "4", "5", "6" };
	bool correctChoice = false;
	int compteRelance = 0;
	int score = 0;
	Des* des1 = new Des();
	Des* des2 = new Des();
	Des* des3 = new Des();
	Des* des4 = new Des();
	Des* des5 = new Des();

	Player* pablo = new Player();
	int nbCase = 0;
	vector<Des*> listDes;

	listDes.push_back(des1);
	listDes.push_back(des2);
	listDes.push_back(des3);
	listDes.push_back(des4);
	listDes.push_back(des5);

	while (nbCase != 6) {
		choix = "";
		while (compteRelance != 3) {
			selection = "";
			for (int i = 0; i < 5; i++) {
				if (listDes[i]->relance() == "") {
					listDes[i]->attributionValeur();
					cout << "Des numero " << i + 1 << " : " << listDes[i]->getValeur() << endl;
				}
				else {
					cout << "Des numero " << i + 1 << " : " << listDes[i]->getValeur() << "    Des stockée" << endl;
				}
			}

			while (selection != "aucun") {
				cout << "Quelle des veux tu garder ?" << endl;
				cin >> selection;
				if (selection == "1") {
					if (listDes[0]->relance() == "garder") {
						cout << "Des deja garder" << endl;
					}
					else {
						listDes[0]->switchGarder();
					}
				}
				else if (selection == "2") {
					if (listDes[1]->relance() == "garder") {
						cout << "Des deja garder" << endl;
					}
					else {
						listDes[1]->switchGarder();
					}
				}
				else if (selection == "3") {
					if (listDes[2]->relance() == "garder") {
						cout << "Des deja garder" << endl;
					}
					else {
						listDes[2]->switchGarder();
					}
				}
				else if (selection == "4") {
					if (listDes[3]->relance() == "garder") {
						cout << "Des deja garder" << endl;
					}
					else {
						listDes[3]->switchGarder();
					}
				}
				else if (selection == "5") {
					if (listDes[4]->relance() == "garder") {
						cout << "Des deja garder" << endl;
					}
					else {
						listDes[4]->switchGarder();
					}
				}
			}
			compteRelance += 1;
		}
		cout << "Regardons les combinaisons disponilbles" << endl;
		cout << "Sur numéro voulez vous scorer ?" << endl;
		while (count(chiffre.begin(), chiffre.end(), choix) == false) {
			cin >> choix;
			score = 0;
			if (choix == "1") {
				for (int i = 0; i < 5; i++) {
					if (listDes[i]->getValeur() == 1) {
						score = score + 1;
					}
				}
				correctChoice = pablo->replaceValeur(0, score);
			}
			else if (choix == "2") {
				for (int i = 0; i < 5; i++) {
					if (listDes[i]->getValeur() == 2) {
						score = score + 2;
					}
				}
				correctChoice = pablo->replaceValeur(1, score);
			}
			else if (choix == "3") {
				for (int i = 0; i < 5; i++) {
					if (listDes[i]->getValeur() == 3) {
						score = score + 3;
					}
				}
				correctChoice = pablo->replaceValeur(2, score);
			}
			else if (choix == "4") {
				for (int i = 0; i < 5; i++) {
					if (listDes[i]->getValeur() == 4) {
						score = score + 4;
					}
				}
				correctChoice = pablo->replaceValeur(3, score);
			}
			else if (choix == "5") {
				for (int i = 0; i < 5; i++) {
					if (listDes[i]->getValeur() == 5) {
						score = score + 5;
					}
				}
				correctChoice = pablo->replaceValeur(4, score);
			}
			else if (choix == "6") {
				for (int i = 0; i < 5; i++) {
					if (listDes[i]->getValeur() == 6) {
						score = score + 6;
					}
				}
				correctChoice = pablo->replaceValeur(5, score);
			}
		}
		if (correctChoice) {
			nbCase++;
			compteRelance = 0;
		}
	}
	if (pablo->getValeur_total() > 62) {
		cout << "Votre score final est de " << pablo->getValeur_total() + 35 << endl;
	}
	else {
		cout << "Votre score final est de " << pablo->getValeur_total() << endl;
	}
	return 0;
}
