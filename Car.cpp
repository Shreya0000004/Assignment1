// Car.cpp
#include "Car.h"

Car::Car() {
    speed = 0;
    gear = 0;
}

void Car::accelerate() {
    speed += 10;
}

void Car::brake() {
    if (speed >= 10) {
        speed -= 10;
    } else {
        speed = 0;
        throw CarException("Speed cannot be negative"); // Use const char* message
    }
}

void Car::shiftGear(int newGear) {
    gear = newGear;
}

int Car::getSpeed() {
    return speed;
}

int Car::getGear() {
    return gear;
}


