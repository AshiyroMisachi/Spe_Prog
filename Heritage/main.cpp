#include "animal.h"
#include "pigeon.h"
#include <iostream>
#include <string>

int main()
{
    Animal * animalChoisi;
    animalChoisi = new Pigeon("Dimitri");

    while (animalChoisi->getBonheur() < 100) {
        int choix = 10;
        std::cout << "Que vous vous faire avec " << animalChoisi->getName() << " ?" << std::endl;
        std::cout << "1 - Nourrir" << std::endl;
        std::cout << "2 - Carresser" << std::endl;
        std::cout << "3 - Gronder" << std::endl;
        std::cout << "4 - Pecher" << std::endl;
        std::cout << "5 - Jouer" << std::endl;
        while (choix > 6) {
            std::cin >> choix;
            if (choix == 1) {
                animalChoisi->nourir();
            }
            else if (choix == 2) {
                animalChoisi->carresser();
            }
            else if (choix == 3) {
                animalChoisi->gronder();
            }
            else if (choix == 4) {
                animalChoisi->pecher();
            }
            else if (choix == 5) {
                animalChoisi->jouer();
            }
        }

        animalChoisi->event();
    }
    
    return 0;
}

