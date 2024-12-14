#include "RobotChasseur.h"
#include <cmath>

RobotChasseur::RobotChasseur(string nom, double x, double y, double portee)
    : Robot(nom, x, y, portee) {}

bool RobotChasseur::tester(double ciblex, double cibley) {
    double dx = x - ciblex;
    double dy = y - cibley;
    double distance = sqrt(dx * dx + dy * dy);
    return (distance < portee);
}

void RobotChasseur::tuer(Robot& cible) {
    if (tester(cible.getX(), cible.getY()) && !cible.getStatut()) {
        cible.setStatut(true);
    }
}
