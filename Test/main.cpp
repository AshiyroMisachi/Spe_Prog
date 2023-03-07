#include "Grille.h"
#include "Tictactoe.h"
#include <iostream>
#include <string>


int main(){

    bool partiegagnee = false;
    Tictactoe * jeu = new Tictactoe();
     
    int numeroCase;

    while(!partiegagnee && !(jeu->testeJeuNul())){
        jeu->afficheGrille();
        std::cin >> numeroCase;
        jeu->ajouteSymbole((numeroCase - 1) % 3, (numeroCase - 1) / 3);
        partiegagnee = jeu->testeVictoireDiagonale() || jeu->testeVictoireHorizontale() || jeu->testeVictoireVerticale();
        jeu->finTour();
    }

    
    
    return 0;
}