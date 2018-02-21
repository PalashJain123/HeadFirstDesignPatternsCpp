//
//  ChicagoStyleCheesePizza.cpp
//  Factory Pattern
//
//  Created by Cindy Solomon on 2/13/18.
//  Copyright © 2018 Brian Arnold. All rights reserved.
//

#include "ChicagoStyleCheesePizza.hpp"
#include <iostream>

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
{
    name = "Chicago Style Deep Dish Pizza";
    dough = "Extra thick crust dough";
    sauce = "Plum tomato sauce";
    toppings.push_back("Shredded mozzarella");
}

