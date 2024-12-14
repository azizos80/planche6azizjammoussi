#include <iostream>
#include <vector>
#include "RobotChasseur.h"

using namespace std;

int main() {
    RobotChasseur robotChass1("Optimus", 2, 3, 25);
    robotChass1.deplacer(33, 19);
    robotChass1.afficher();
    vector<Robot> robots = {
        Robot("Megatron", 10, 10, 5),
        Robot("Starscream", 30, 20, 5),
        Robot("Bumblebee", 25, 25, 5),
        Robot("Ironhide", 40, 30, 5),
        Robot("Ratchet", 50, 50, 5)
    };
    for (auto& robot : robots) {
        robot.afficher();
        robotChass1.tuer(robot);
        cout << "Après tentative de destruction:" << endl;
        robot.afficher();
    }

    return 0;
}
