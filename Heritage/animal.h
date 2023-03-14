#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {

protected:
    std::string name;
    int bonheur;
    int faim;

public:
    Animal();
    Animal(std::string nom);
    std::string getName();
    int getBonheur();
    void nourir();
    void verifFaim();
    void carresser();
    void gronder();
    void pecher();
    void jouer();
    virtual void event() const;

};

#endif