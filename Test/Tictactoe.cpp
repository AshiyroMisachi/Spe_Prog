#ifndef TICTACTOE_CPP
#define TICTACTOE_CPP

#include "Grille.h"
#include "Tictactoe.h"
#include <iostream>


Tictactoe::Tictactoe() : _symboleCourant('X'), _numeroTour(0), _tour(true) {}

    void Tictactoe::afficheGrille(){
        _grilleDeJeu.affiche();
    }

    void Tictactoe::ajouteSymbole(int x, int y){
        if (_grilleDeJeu.getContent(x, y) == ' ') {
            _grilleDeJeu.setContent(x, y, _symboleCourant);
            _symboleCourant == 'X' ? _symboleCourant = 'O' : _symboleCourant = 'X';
        }
        else { 
            std::cout << "Coup incorrect. Veuillez entrer un nouveau numéro de case !";
            int numeroCase;
            std::cin >> numeroCase;
            this->ajouteSymbole((numeroCase - 1) % 3, (numeroCase - 1) / 3);
        }
        
    }

    bool Tictactoe::testeVictoireVerticale(){

        if (_grilleDeJeu.getContent((1 - 1) % 3, (1 - 1) / 3) == _symboleCourant && _grilleDeJeu.getContent((4 - 1) % 3, (4 - 1) / 3) == _symboleCourant && _grilleDeJeu.getContent((7 - 1) % 3, (7 - 1) / 3) == _symboleCourant) {
            _grilleDeJeu.affiche();
            std::cout << "Partie terminé" << std::endl;
            return true;
        }
        else if (_grilleDeJeu.getContent((2 - 1) % 3, (2 - 1) / 3) == _symboleCourant && _grilleDeJeu.getContent((5 - 1) % 3, (5 - 1) / 3) == _symboleCourant && _grilleDeJeu.getContent((8 - 1) % 3, (8 - 1) / 3) == _symboleCourant) {
            _grilleDeJeu.affiche();
            std::cout << "Partie terminé" << std::endl;
            return true;
        }
        else if (_grilleDeJeu.getContent((3 - 1) % 3, (3 - 1) / 3) == _symboleCourant && _grilleDeJeu.getContent((6 - 1) % 3, (6 - 1) / 3) == _symboleCourant && _grilleDeJeu.getContent((9 - 1) % 3, (9 - 1) / 3) == _symboleCourant) {
            _grilleDeJeu.affiche();
            std::cout << "Partie terminé" << std::endl;
            return true;
        }
        else {
            return false;
        }
    }

    bool Tictactoe::testeVictoireHorizontale(){

        if (_grilleDeJeu.getContent((1 - 1) % 3, (1 - 1) / 3) == _symboleCourant && _grilleDeJeu.getContent((2 - 1) % 3, (2 - 1) / 3) == _symboleCourant && _grilleDeJeu.getContent((3 - 1) % 3, (3 - 1) / 3) == _symboleCourant) {
            _grilleDeJeu.affiche();
            std::cout << "Partie terminé" << std::endl;
            return true;
        }
        else if (_grilleDeJeu.getContent((4 - 1) % 3, (4 - 1) / 3) == _symboleCourant && _grilleDeJeu.getContent((5 - 1) % 3, (5 - 1) / 3) == _symboleCourant && _grilleDeJeu.getContent((6 - 1) % 3, (6 - 1) / 3) == _symboleCourant) {
            _grilleDeJeu.affiche();
            std::cout << "Partie terminé" << std::endl;
            return true;
        }
        else if (_grilleDeJeu.getContent((7 - 1) % 3, (7 - 1) / 3) == _symboleCourant && _grilleDeJeu.getContent((8 - 1) % 3, (8 - 1) / 3) == _symboleCourant && _grilleDeJeu.getContent((9 - 1) % 3, (9 - 1) / 3) == _symboleCourant) {
            _grilleDeJeu.affiche();
            std::cout << "Partie terminé" << std::endl;
            return true;
        }
        else {
            return false;
        }
    }

    bool Tictactoe::testeVictoireDiagonale(){

        if (_grilleDeJeu.getContent((1 - 1) % 3, (1 - 1) / 3) == _symboleCourant && _grilleDeJeu.getContent((5 - 1) % 3, (5 - 1) / 3) == _symboleCourant && _grilleDeJeu.getContent((9 - 1) % 3, (9 - 1) / 3) == _symboleCourant) {
            _grilleDeJeu.affiche();
            std::cout << "Partie terminé" << std::endl;
            return true;
        }
        else if (_grilleDeJeu.getContent((3 - 1) % 3, (3 - 1) / 3) == _symboleCourant && _grilleDeJeu.getContent((5 - 1) % 3, (5 - 1) / 3) == _symboleCourant && _grilleDeJeu.getContent((7 - 1) % 3, (7 - 1) / 3) == _symboleCourant) {
            _grilleDeJeu.affiche();
            std::cout << "Partie terminé" << std::endl;
            return true;
        }
        else {
            return false;
        }
    }

    bool Tictactoe::testeJeuNul(){
        if (_numeroTour == 9) {
            std::cout << "Match nul" << std::endl;
            return true;
        }
        else {
            return false;
        }
        
    }

    void Tictactoe::finTour(){
        _numeroTour += 1;
   }

#endif