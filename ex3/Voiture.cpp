#include "Voiture.h"

// Constructeur
Voiture::Voiture(int annee, double prix, int places) : Vehicule(annee, prix), nombrePlaces(places) {}

// Méthode pour afficher les informations de la voiture
void Voiture::afficher() const {
    Vehicule::afficher();
    std::cout << "Nombre de places: " << nombrePlaces << std::endl;
}

// Méthode pour accélérer
void Voiture::accelerer(){
    std::cout << "je peux atteindre 200 km/h." << std::endl;
}
