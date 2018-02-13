//
//  Whip.cpp
//  Decorator Pattern
//
//  Created by Kevin Lee on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "Whip.hpp"

Whip::Whip(Beverage *beverage) {
    this->beverage = beverage;
}

std::string Whip::getDescription() const {
    return beverage->getDescription() + ", Whip";
}

double Whip::cost() const {
    return beverage->cost() + 0.10;
}
