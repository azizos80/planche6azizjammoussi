#include <iostream>
#include "vecteur.h"
#include "vecteurThree.h"

int main() {
    vecteur v1;
    std::cout << "Vecteur nul : ";
    v1.afficher();

    v1.deplacer(2.5, 6);
    std::cout << "Vecteur après déplacement: ";
    v1.afficher();

    vecteurThree* v3D = new vecteurThree(1.0, 2.0, 3.0);
    std::cout << "Vecteur 3D: ";
    v3D->afficher();

    delete v3D;

    return 0;
}
