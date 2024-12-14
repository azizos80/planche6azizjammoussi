#include "Vehicule.h"

// Initialisation du num�ro de s�rie
int Vehicule::numeroSerie = 1;
int Vehicule::numeroVehicule=0;
// Constructeur
Vehicule::Vehicule(int annee, double prix) : annee(annee), prix(prix) {
    if (numeroVehicule >= 10000) {
        numeroSerie++;
        numeroVehicule = 1; // R�initialiser � 1
    } else  {
        numeroVehicule++;
    }
    nums=numeroSerie;
    numv=numeroVehicule;
}
void Vehicule::afficher() const {
    std::cout << "Matricule: " << numv << " TUN " << nums<< ", Ann�e: " << annee << ", Prix: " << prix <<std::endl;
}
