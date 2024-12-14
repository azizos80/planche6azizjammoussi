#ifndef VEHICULE_H
#define VEHICULE_H

#include <iostream>

class Vehicule {
private:
    static int numeroSerie; // Numéro de série global
    static int numeroVehicule; // Numéro de véhicule dans la série
    int nums;
    int numv;
    int annee; // Année du modèle
    double prix; // Prix du véhicule

public:
    // Constructeur
    Vehicule(int annee, double prix);

    // Méthode pour afficher les informations du véhicule
    virtual void afficher() const;

    // Méthode virtuelle pour accélérer
    virtual void accelerer()= 0; // Méthode pure virtuelle
};

#endif // VEHICULE_H
