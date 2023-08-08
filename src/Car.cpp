#include "../include/Car.h"

Car::Car(const std::string &veichleType, const std::string &regNumber, int model, const std::string &colour,
         int howManyDoors) : Veichle(
        veichleType, regNumber, model, colour) {
    HowManyDoors = howManyDoors;
    if (HowManyDoors != 2 && HowManyDoors != 4)
        throw std::runtime_error("Bilen må ha enten 2 eller 4 dører!!");
}

void Car::howLongToHome() {
    int tur = 500;
    int kjort = 0;
    std::cout << "Hvor langt har du kjørt?";
    std::cin >> kjort;
    tur = 500 - kjort;
    std::cout << "Da er det " << tur << " igjen av turen" << std::endl;


}

void Car::printInfo() {
    std::cout << "Dette er en " << getVeichleType() << ". Regnummeret er " << getRegNumber() << ". Det er en "
              << getModel() << "-modell. Og fargen er " << getColour() << std::endl;

}

void Car::printFuelEffiency() {
    std::cout << "Denne bilen bruker 0,5 liter/mil" << std::endl;

}


