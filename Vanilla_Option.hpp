//
//  Vanilla_Option.hpp
//  C++ Derivatives
//
//  Created by Mamoudou Diallo on 3/31/19.
//  Copyright © 2019 Talibé. All rights reserved.
//

#ifndef Vanilla_Option_hpp
#define Vanilla_Option_hpp

#include <stdio.h>
class VanillaOption
{
private:
    void init();
    void copy (const VanillaOption& rhs);
    double K();
    double r();
    double sigma();
    double T();
    double s();
    
public:
    VanillaOption(); // initalize constructor
    VanillaOption(const double& _K, const double& _r, double const& _T,const double& _sigma, const double& _s );  // parameter constructor
    VanillaOption(const double& _rhs);  // copy constructor
    VanillaOption& operator = (const VanillaOption& rhs);// assigment
    virtual ~ VanillaOption();
public:
    // the " Getter methods for our vanilla option parameters
    double getK() const;
    double getsigma() const;
    double getT() const;
    double getr() const;
    double gets() const;
    
    
    double calc_call_price() const;
    double calc_put_price() const;
    
    

    
};

#endif /* Vanilla_Option_hpp */
