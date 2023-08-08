#include "include/Bus.h"
#include "include/Car.h"
#include "include/MotorCycle.h"
#include "include/Bus.h"

#include <iostream>
#include <vector>

int findMissingNumber(std::vector<int> list) {
    int n = list.size();
    for (int i = 1; i < n; i++) {
        int target = i;

        std::vector<int>::iterator it = std::find(list.begin(), list.end(), target);
        if (it == list.end())
            std::cout << "Tallet som mangler er " << target << std::endl;
        else
            std::cerr << "Det mangler ingen tall fra lista" << std::endl;
        break;
    }

}


int main() {

    std::vector<int> myVec = {1, 3, 5, 2, 6, 8, 7, 4};
    findMissingNumber(myVec);









/* try {

        //Veichles are initialized with veichleType, regNumber, model and lastly colour
        Bus bus1("Bus", "JK74955", 2005, "White", 76);

        Car car1("car", "HJ83744", 2000, "Blue", 2);

        MotorCycle motorCycle1("Motorcycle", "UR02843", 2010, "Red");

    }

    catch (std::runtime_error &e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    } */

}
