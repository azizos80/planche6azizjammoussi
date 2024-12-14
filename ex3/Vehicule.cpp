#include "Vehicule.h"

// Initialisation du numéro de série
int Vehicule::numeroSerie = 1;
int Vehicule::numeroVehicule=0;
// Constructeur
Vehicule::Vehicule(int annee, double prix) : annee(annee), prix(prix) {
    if (numeroVehicule >= 10000) {
        numeroSerie++;
        numeroVehicule = 1; // Réinitialiser à 1
    } else  {
        numeroVehicule++;
    }
    nums=numeroSerie;
    numv=numeroVehicule;
}
void Vehicule::afficher() const {
    std::cout << "Matricule: " << numv << " TUN " << nums<< ", Année: " << annee << ", Prix: " << prix <<std::endl;
}
