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
        char contenuActuel = _grilleDeJeu.getContent(x, y);
        if (contenuActuel == 'X') {
            std::cout << "Veuillez choisir une case vide" << std::endl;
        }
        else if (contenuActuel == 'O') {
            std::cout << "Veuillez choisir une case vide" << std::endl;
        }
        else {
            _grilleDeJeu.setContent(x, y ,_symboleCourant);
            _numeroTour += 1;
            if (_tour == false) {
                _tour = true;
            }
            else {
                _tour = false;
            }
        }
        
    }

    bool Tictactoe::testeVictoireVerticale(){
        char contenu1 = _grilleDeJeu.getContent(0, 0);
        char contenu2 = _grilleDeJeu.getContent(1, 0);
        char contenu3 = _grilleDeJeu.getContent(2, 0);
        char contenu4 = _grilleDeJeu.getContent(3, 0);
        char contenu5 = _grilleDeJeu.getContent(4, 0);
        char contenu6 = _grilleDeJeu.getContent(5, 0);
        char contenu7 = _grilleDeJeu.getContent(6, 0);
        char contenu8 = _grilleDeJeu.getContent(7, 0);
        char contenu9 = _grilleDeJeu.getContent(8, 0);

        if (contenu1 == _symboleCourant &&  contenu4 == _symboleCourant && contenu7 == _symboleCourant) {
            _grilleDeJeu.affiche();
            std::cout << "Partie terminé" << std::endl;
            return true;
        }
        else if (contenu2 == _symboleCourant && contenu5 == _symboleCourant && contenu8 == _symboleCourant) {
            _grilleDeJeu.affiche();
            std::cout << "Partie terminé" << std::endl;
            return true;
        }
        else if (contenu3 == _symboleCourant && contenu6 == _symboleCourant && contenu9 == _symboleCourant) {
            _grilleDeJeu.affiche();
            std::cout << "Partie terminé" << std::endl;
            return true;
        }
        else {
            return false;
        }
    }

    bool Tictactoe::testeVictoireHorizontale(){
        char contenu1 = _grilleDeJeu.getContent(0, 0);
        char contenu2 = _grilleDeJeu.getContent(1, 0);
        char contenu3 = _grilleDeJeu.getContent(2, 0);
        char contenu4 = _grilleDeJeu.getContent(3, 0);
        char contenu5 = _grilleDeJeu.getContent(4, 0);
        char contenu6 = _grilleDeJeu.getContent(5, 0);
        char contenu7 = _grilleDeJeu.getContent(6, 0);
        char contenu8 = _grilleDeJeu.getContent(7, 0);
        char contenu9 = _grilleDeJeu.getContent(8, 0);

        if (contenu1 == _symboleCourant && contenu2 == _symboleCourant && contenu3 == _symboleCourant) {
            _grilleDeJeu.affiche();
            std::cout << "Partie terminé" << std::endl;
            return true;
        }
        else if (contenu4 == _symboleCourant && contenu5 == _symboleCourant && contenu6 == _symboleCourant) {
            _grilleDeJeu.affiche();
            std::cout << "Partie terminé" << std::endl;
            return true;
        }
        else if (contenu7 == _symboleCourant && contenu8 == _symboleCourant && contenu9 == _symboleCourant) {
            _grilleDeJeu.affiche();
            std::cout << "Partie terminé" << std::endl;
            return true;
        }
        else {
            return false;
        }
    }

    bool Tictactoe::testeVictoireDiagonale(){
        char contenu1 = _grilleDeJeu.getContent(0, 0);
        char contenu3 = _grilleDeJeu.getContent(2, 0);
        char contenu5 = _grilleDeJeu.getContent(4, 0);
        char contenu7 = _grilleDeJeu.getContent(6, 0);
        char contenu9 = _grilleDeJeu.getContent(8, 0);

        if (contenu1 == _symboleCourant && contenu5 == _symboleCourant && contenu9 == _symboleCourant) {
            _grilleDeJeu.affiche();
            std::cout << "Partie terminé" << std::endl;
            return true;
        }
        else if (contenu3 == _symboleCourant && contenu5 == _symboleCourant && contenu7 == _symboleCourant) {
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
        // à compléter
        if (_tour == false) {
            _symboleCourant = 'O';
        }
        else {
            _symboleCourant = 'X';
        }

   }

#endif