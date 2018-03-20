//
//  CeilingFan.cpp
//  Command Pattern
//
//  Based on "Head First Design Patterns," Freeman & Robson, O'Reilly.
//
//  Created by Brian Arnold on 3/15/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "CeilingFan.hpp"

#include <iostream>

CeilingFan::CeilingFan(const std::string& location) :
    location(location) {
    
}

CeilingFan::Speed CeilingFan::getSpeed() const {
    return speed;
}

void CeilingFan::setSpeed(Speed speed) {
    this->speed = speed;
    std::cout << getDescription() << std::endl;
}

std::string CeilingFan::getDescription() const {
    std::string state;
    
    switch (speed) {
        case off: state = "off"; break;
        case low: state = "on low"; break;
        case medium: state = "on medium"; break;
        case high: state = "on high"; break;
    }
    
    return location + " Ceiling Fan is " + state;
}
