#include "Robot.h"

Robot::Robot(string nom, double x, double y, double portee)
    : nom(nom), x(x), y(y), portee(portee), statut(false) {}

void Robot::deplacer(double dx, double dy) {
    x += dx;
    y += dy;
}

void Robot::afficher() {
    cout << "nom: " << nom
         << " coordonnees: (" << x << ", " << y << ")"
         << " portee: " << portee
         << " statut: " << (statut ? "actif" : "inactif")
         << endl;
}
