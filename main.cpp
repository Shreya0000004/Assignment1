#include <iostream>
#include "Car.h"

int main() {
    try {
        // Test Case 1: Basic Functionality
        Car* car1 = new Car();
        std::cout << "Test Case 1 - Basic Functionality:" << std::endl;
        std::cout << "Car speed: " << car1->getSpeed() << std::endl; // Car speed: 0
        car1->accelerate();
        std::cout << "Accelerating... New speed: " << car1->getSpeed() << std::endl; // Accelerating... New speed: 10
        car1->brake();
        std::cout << "Applying brake... New speed: " << car1->getSpeed() << std::endl; // Applying brake... New speed: 0
        delete car1;

        // Test Case 2: Gear Shifting
        Car* car2 = new Car();
        std::cout << "\nTest Case 2 - Gear Shifting:" << std::endl;
        car2->accelerate();
        std::cout << "Accelerating... New speed: " << car2->getSpeed() << std::endl; // Accelerating... New speed: 10
        car2->shiftGear(2);
        std::cout << "Shifted to gear: " << car2->getGear() << std::endl; // Shifted to gear: 2
        car2->accelerate();
        std::cout << "Accelerating... New speed: " << car2->getSpeed() << std::endl; // Accelerating... New speed: 20
        delete car2;

        // Test Case 3: Exception Handling
        Car* car3 = new Car();
        std::cout << "\nTest Case 3 - Exception Handling:" << std::endl;
        car3->accelerate();
        std::cout << "Accelerating... New speed: " << car3->getSpeed() << std::endl; // Accelerating... New speed: 10
        car3->brake();
        std::cout << "Applying brake... New speed: " << car3->getSpeed() << std::endl; // Applying brake... New speed: 0
        try {
            car3->brake(); // Attempt to apply brake again
        } catch (const CarException& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
        delete car3;

        // Test Case 4: Accelerate to 120 and Brake
        Car* car4 = new Car();
        std::cout << "\nTest Case 4 - Accelerate to 120 and Brake:" << std::endl;
        // Accelerate to 120
        while (car4->getSpeed() < 120) {
            car4->accelerate();
            std::cout << "Speed: " << car4->getSpeed() << std::endl;
        }
        // Apply brakes until speed is 0
        while (car4->getSpeed() > 0) {
            car4->brake();
            std::cout << "Speed: " << car4->getSpeed() << std::endl;
        }
        delete car4;

        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
}

