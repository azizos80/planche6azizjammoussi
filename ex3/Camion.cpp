#include "Camion.h"
Camion::Camion(int annee, double prix, double charge) : Vehicule(annee, prix), chargeMaximale(charge) {}
void Camion::afficher() const {
    Vehicule::afficher();
    std::cout << "Charge maximale: " << chargeMaximale << " kg" << std::endl;
}
void Camion::accelerer()  {
    std::cout << "Le camion se déplace et je peux atteindre 120 km/h." << std::endl;
}
