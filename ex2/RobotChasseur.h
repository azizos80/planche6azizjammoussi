#ifndef ROBOTCHASSEUR_H
#define ROBOTCHASSEUR_H

#include "Robot.h"

class RobotChasseur : public Robot {
public:
    RobotChasseur(string nom, double x, double y, double portee);
    void tuer(Robot& cible);
    bool tester(double ciblex, double cibley);
};

#endif // ROBOTCHASSEUR_H
