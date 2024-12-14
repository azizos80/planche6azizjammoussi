#ifndef VECTEURTHREE_H
#define VECTEURTHREE_H

#include "vecteur.h"

class vecteurThree : public vecteur {
private:
    double z;

public:
    vecteurThree();
    vecteurThree(double x, double y, double z);
    void afficher() const;
};

#endif // VECTEURTHREE_H
