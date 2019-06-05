//
//  Vanilla_Option.cpp
//  C++ Derivatives
//
//  Created by Mamoudou Diallo on 3/31/19.
//  Copyright © 2019 Talibé. All rights reserved.
//

#include "Vanilla_Option.hpp"
#include <math.h>
//using namespace std;

void VanillaOption::init()
{
    K() = 100;
    r() = 0.05;
    T = 30;
    s = 100; // at the money
    sigma = 0.3; // volatility
}
void VanillaOption::copy(const VanillaOption& rhs)
{
    K = rhs.getK();
    
    
}






