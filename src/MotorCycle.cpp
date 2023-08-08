#include <string>
#include "../include/MotorCycle.h"

MotorCycle::MotorCycle(const std::string &veichleType, const std::string &regNumber, int model,
                       const std::string &colour) : Veichle(veichleType, regNumber, model, colour) {}

void MotorCycle::printInfo() {
    std::cout << "Dette er en " << getVeichleType() << ". Regnummeret er " << getRegNumber() << ". Det er en "
              << getModel() << "-modell. Og fargen er " << getColour() << std::endl;

}

void MotorCycle::printFuelEffiency() {
    std::cout << "Denne motorsykkelen bruker 0,8 liter/mil" << std::endl;


}
