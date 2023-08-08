#ifndef FORBEREDELSE_MOTORCYCLE_H
#define FORBEREDELSE_MOTORCYCLE_H

#include "../include/Veichle.h"


class MotorCycle : public Veichle {
public:
    MotorCycle(const std::string &veichleType, const std::string &regNumber, int model, const std::string &colour);

    void printInfo() override;

    void printFuelEffiency() override;

};

#endif //FORBEREDELSE_MOTORCYCLE_H
