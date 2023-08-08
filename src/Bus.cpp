#include "../include/Bus.h"


Bus::Bus(const std::string &veichleType, const std::string &regNumber, int model, const std::string &colour,
         int passengerCapacity) : Veichle(veichleType, regNumber, model,
                                          colour) { PassengerCapacity = passengerCapacity; }

int Bus::howManySeatsLeft(int seatsTaken) {
    if (seatsTaken > PassengerCapacity)
        throw std::runtime_error("Antall seter tatt kan ikke være større ennj tilgjengelige seter");
    int seatsLeft = PassengerCapacity - seatsTaken;
    std::cout << "Det er " << seatsLeft << " igjen" << std::endl;
    return seatsLeft;

}

void Bus::printInfo() {
    std::cout << "Dette er en " << getVeichleType() << ". Regnummeret er " << getRegNumber() << ". Det er en "
              << getModel() << "-modell. Og fargen er " << getColour() << ". Denne bussen har en kapasitet på "
              << PassengerCapacity << " Passasjerer" << std::endl;

}

void Bus::printFuelEffiency() {
    std::cout << "Denne bussen bruker 1,2 liter/mil" << std::endl;

}



