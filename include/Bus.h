#ifndef FORBEREDELSE_BUS_H
#define FORBEREDELSE_BUS_H

#include "Veichle.h"

class Bus : public Veichle {
    int PassengerCapacity;

public:

    Bus(const std::string &veichleType, const std::string &regNumber, int model, const std::string &colour,
        int passengerCapacity);

    int howManySeatsLeft(int seatsTaken);

    void printInfo() override;

    void printFuelEffiency() override;
};

#endif //FORBEREDELSE_BUS_H
