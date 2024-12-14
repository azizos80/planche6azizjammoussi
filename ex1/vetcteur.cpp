#include "vecteur.h"

vecteur::vecteur() : x(0), y(0) {}

vecteur::vecteur(double x, double y) : x(x), y(y) {}

void vecteur::afficher() const {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}

void vecteur::deplacer(double dx, double dy) {
    x += dx;
    y += dy;
}
