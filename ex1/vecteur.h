#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>

class vecteur {
private:
    double x;
    double y;

public:
    vecteur();
    vecteur(double x, double y);
    void afficher() const;
    void deplacer(double dx, double dy);
};

#endif // VECTEUR_H
