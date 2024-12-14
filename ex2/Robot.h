#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <string>
using namespace std;

class Robot {
public:
    Robot(string nom, double x, double y, double portee);
    void deplacer(double dx, double dy);
    void afficher();

    // Getters
    double getX() const { return x; }
    double getY() const { return y; }
    bool getStatut() const { return statut; }

    // Setter
    void setStatut(bool newStatut) { statut = newStatut; }

protected:
    string nom;
    double x;
    double y;
    double portee;
    bool statut;
};

#endif // ROBOT_H
