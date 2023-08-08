#ifndef FORBEREDELSE_CAR_H
#define FORBEREDELSE_CAR_H

#include "Veichle.h"

class Car : public Veichle {
    int HowManyDoors;
public:

    Car(const std::string &veichleType, const std::string &regNumber, int model, const std::string &colour,
        int howManyDoors);

    Car(const std::string &veichleType, const std::string &regNumber, int model, const std::string &colour);

    void howLongToHome();

    void printInfo() override;

    void printFuelEffiency() override;
};

#endif //FORBEREDELSE_CAR_H
