//
//  main.cpp
//  Decorator Pattern
//
//  Created by Brian Arnold on 2/4/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "DarkRoast.hpp"
#include "Decaf.hpp"
#include "Espresso.hpp"
#include "HouseBlend.hpp"

#include "Milk.hpp"
#include "Mocha.hpp"
#include "Soy.hpp"
#include "Whip.hpp"

#include <iostream>

int main(int argc, const char * argv[]) {
    
    Espresso beverage;
    std::cout << beverage.getDescription() << " $" << beverage.cost() << std::endl;
    
    std::unique_ptr<Beverage> beverage2 = std::make_unique<DarkRoast>();
    beverage2 = std::make_unique<Mocha>(beverage2);
    beverage2 = std::make_unique<Mocha>(beverage2);
    beverage2 = std::make_unique<Whip>(beverage2);
    std::cout << beverage2->getDescription() << " $" << beverage2->cost() << std::endl;

    std::unique_ptr<Beverage> beverage3 = std::make_unique<HouseBlend>();
    beverage3 = std::make_unique<Soy>(beverage3);
    beverage3 = std::make_unique<Mocha>(beverage3);
    beverage3 = std::make_unique<Whip>(beverage3);
    std::cout << beverage3->getDescription() << " $" << beverage3->cost() << std::endl;
}
