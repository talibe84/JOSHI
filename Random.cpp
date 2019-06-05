//
//  Random.cpp
//  C++ Derivatives
//
//  Created by Mamoudou Diallo on 4/9/19.
//  Copyright © 2019 Talibé. All rights reserved.
//

#include <stdio.h>

#include "Random1.hpp"
#include <cstdlib>
#include <cmath>

//#if !defined(_MSC_VER)
using namespace std;

double GetOneGaussianBySummation()
{
    double result = 0;
    for (unsigned long j = 0; j < 12; j++)
    {
        result += rand()/static_cast<double>(RAND_MAX);
    }
    
    result -= 6.0;
    return result;
}

double GetOneGaussianByBoxMuller()
{
    double result;
    double x, y;
    double sizeSquared;
    do
    {
        x = 2.0 * rand()/static_cast<double>(RAND_MAX)-1;
        y = 2.0 * rand()/static_cast<double>(RAND_MAX)-1;
        sizeSquared = x*x + y*y;
    }
    while (sizeSquared >= 1.0); {
        result = x* sqrt(-2*log(sizeSquared) / sizeSquared);
    }
    return result; 
}
