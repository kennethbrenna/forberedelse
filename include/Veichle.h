#ifndef FORBEREDELSE_VEICHLE_H
#define FORBEREDELSE_VEICHLE_H

#include <string>
#include <iostream>

class Veichle {
private:
    std::string VeichleType;
    std::string RegNumber;
    int Model;
    std::string Colour;

public:

    const std::string &getVeichleType() const {
        return VeichleType;
    }

    void setVeichleType(const std::string &veichleType) {
        VeichleType = veichleType;
    }

    const std::string &getRegNumber() const {
        return RegNumber;
    }

    void setRegNumber(const std::string &regNumber) {
        RegNumber = regNumber;
    }

    int getModel() const {
        return Model;
    }

    void setModel(int model) {
        Model = model;
    }

    const std::string &getColour() const {
        return Colour;
    }

    void setColour(const std::string &colour) {
        Colour = colour;
    }

    Veichle(std::string veichleType, std::string regNumber, int model, std::string colour) {
        VeichleType = veichleType;
        RegNumber = regNumber;
        Model = model;
        Colour = colour;
    }

    virtual void printInfo() = 0;

    virtual void printFuelEffiency() = 0;
};


#endif //FORBEREDELSE_VEICHLE_H
