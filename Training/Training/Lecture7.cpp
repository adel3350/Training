//
//  Lecture7.cpp
//  Training
//
//  Created by Adel Araji on 2017-02-03.
//  Copyright © 2017 Adel Araji. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Lecture7.h"

using namespace std;

int main() {
    
    //Make sure to dereference when declaring a new object(using the star) because it's a pointer(address) and by using the star
    //u get what the address is pointing to
    //THis is a pointer
    //All 3 declarations work, in the second one, -> have to be used for unctions/parameters instead of .
    Car toyota = *new Car("RandomLicense", 1994, "Toyota");
    Car *porsche = new Car("fdsgs",1998,"vdsg");
    Car carross("Vani",32542,"vdfg");
    
    cout<<toyota.getLicense()<<endl;
    cout<<toyota.getYear()<<endl;
    cout<<toyota.getStyle()<<endl;
    cout<<toyota.getDescription()<<endl;
    cout<<porsche->getLicense()<<endl;
    //instead of -> , we can dereference the object and use a function
    cout<<(*porsche).getLicense()<<endl;
    cout<<carross.getDescription()<<endl;
    
    //Testing virtual
    Vehicule *vivi = &carross;
    cout<<vivi->getDescription()<<endl;//if we didn't use virtual, this would have printed "vehiule" and not "car"
    
    
    
}
