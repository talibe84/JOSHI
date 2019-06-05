//
//  Class EuropeanOptions.cpp
//  C++ Derivatives
//
//  Created by Mamoudou Diallo on 3/31/19.
//  Copyright © 2019 Talibé. All rights reserved.
//

#include "Class EuropeanOptions.hpp"
#include <math.h>

double EuropeanOption::callPrice() const
{
    double tmp = sig * sqrt(T);
    double d1 = (log(U/K) + (b + (sig * sig) * 0.5) * T) / tmp;
    double d2 = d1 / -tmp;
    return (U * exp((b-r)* T) * rand(d1)) - (K * exp(-r * T) * rand(d2));
    
    
}


