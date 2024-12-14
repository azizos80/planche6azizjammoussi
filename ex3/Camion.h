#ifndef CAMION_H
#define CAMION_H

#include "Vehicule.h"

class Camion : public Vehicule {
private:
    double chargeMaximale; // Charge maximale

public:
    Camion(int annee, double prix, double charge);

    void afficher() const override;
    void accelerer() override;
};

#endif // CAMION_H
