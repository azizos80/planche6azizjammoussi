#ifndef VOITURE_H
#define VOITURE_H

#include "Vehicule.h"

class Voiture : public Vehicule {
private:
    int nombrePlaces; // Nombre de places

public:
    Voiture(int annee, double prix, int places);

    void afficher() const override;
    void accelerer() override;
};

#endif // VOITURE_H
