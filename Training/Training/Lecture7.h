//
//  Lecture7.h
//  Training
//
//  Created by Adel Araji on 2017-02-03.
//  Copyright © 2017 Adel Araji. All rights reserved.
//

#ifndef Lecture7_h
#define Lecture7_h

#include <stdio.h>
#include <iostream>

using namespace std;

class Vehicule {
protected:
    //string can only be used with namespace: std
    string license;
    int year;
public:
    //Constructor assigning license and year 
    Vehicule(const string &myLicense, const int myYear): license(myLicense), year(myYear){}
    
    string getLicense() {
        return license;
    }
    
    int getYear() {
        return year;
    }
    
    //Virtual is only declared in the parent class and it allows the correct function to be used(corresponding to the class) depending on what the object points to
    virtual string getDescription() = 0;//pure virtual, this is an abstract class now. Vehicules cannot be iitialized anymore, only children objects can
    
};

//class Car inheriting class Vehicule
class Car: public Vehicule {
protected:
    string style;
public:
    //Constructor using the parent constructor and initializing any other parameters
    Car(const string &myLicense, const int myYear, const string &myStyle): Vehicule(myLicense, myYear), style(myStyle) {}
    
    const string &getStyle(){
        return style;
    }
    
    // Overre=iding existin function in Vehicule
    string getDescription() {
        return "Function overrided, this is a car now";
    }
};

#endif /* Lecture7_h */
