// Car.h
#ifndef CAR_H
#define CAR_H

#include <stdexcept> // Include the header for exceptions

class Car {
protected:
    int speed;
    int gear;

public:
    Car();
    void accelerate();
    void brake();
    void shiftGear(int newGear);
    int getSpeed();
    int getGear();
};

// Define a custom exception class
class CarException : public std::runtime_error {
public:
    CarException(const char* message) : std::runtime_error(message) {} // Updated constructor
};

#endif

