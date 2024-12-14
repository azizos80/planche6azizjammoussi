#include "vecteurThree.h"

vecteurThree::vecteurThree() : vecteur(), z(0) {}

vecteurThree::vecteurThree(double x, double y, double z) : vecteur(x, y), z(z) {}

void vecteurThree::afficher() const {
    vecteur::afficher();
    std::cout << "z: " << z << std::endl;
}
