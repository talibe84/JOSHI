//
//  Class EuropeanOptions.hpp
//  C++ Derivatives
//
//  Created by Mamoudou Diallo on 3/31/19.
//  Copyright © 2019 Talibé. All rights reserved.
//

#ifndef Class_EuropeanOptions_hpp
#define Class_EuropeanOptions_hpp

#include <stdio.h>
#include <string>  // must be included
using namespace std;  // must be included for string
class EuropeanOption
{
private:  // accessable only inside the class
    
    void init(); // a function that returns nothing called init
    void copy( const EuropeanOption&  o2); // a function named copy that has a parameter which keeps the our class constant while creating a new variable named o2 (COPY CONSTRUCTOR)
    double callPrice() const;  // declaring our variables that do not to be changed anywhere in the program as constants
    double putPrice() const;
    double callDetla() const;
    double putDelta() const;
public:
    double r;  // Rate
    double sig;  // Volatility
    double K; // strike;
    double T;  //Time
    double U;  // Underlining asset
    double b;  // cost of cary
    
    std::string OptType;
    
public:
    EuropeanOption ();  // default call option
    EuropeanOption(const EuropeanOption& option2);  // copy constructor
    EuropeanOption(const string& OptionType);  // create Option Type
    
    virtual ~EuropeanOption();
    
    EuropeanOption& operator =(const EuropeanOption& option2);   // assignment operator
    
    double price() const;
    double delta() const;
    void toggle();
    
    
    
    
    
    
};

#endif /* Class_EuropeanOptions_hpp */
