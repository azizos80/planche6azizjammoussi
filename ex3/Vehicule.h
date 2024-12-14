#ifndef VEHICULE_H
#define VEHICULE_H

#include <iostream>

class Vehicule {
private:
    static int numeroSerie; // Num�ro de s�rie global
    static int numeroVehicule; // Num�ro de v�hicule dans la s�rie
    int nums;
    int numv;
    int annee; // Ann�e du mod�le
    double prix; // Prix du v�hicule

public:
    // Constructeur
    Vehicule(int annee, double prix);

    // M�thode pour afficher les informations du v�hicule
    virtual void afficher() const;

    // M�thode virtuelle pour acc�l�rer
    virtual void accelerer()= 0; // M�thode pure virtuelle
};

#endif // VEHICULE_H
