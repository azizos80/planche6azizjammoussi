#include "Voiture.h"

// Constructeur
Voiture::Voiture(int annee, double prix, int places) : Vehicule(annee, prix), nombrePlaces(places) {}

// M�thode pour afficher les informations de la voiture
void Voiture::afficher() const {
    Vehicule::afficher();
    std::cout << "Nombre de places: " << nombrePlaces << std::endl;
}

// M�thode pour acc�l�rer
void Voiture::accelerer(){
    std::cout << "je peux atteindre 200 km/h." << std::endl;
}
