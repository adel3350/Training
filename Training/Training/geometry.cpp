//
//  geometry.cpp
//  Training
//
//  Created by Adel Araji on 2017-02-06.
//  Copyright © 2017 Adel Araji. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include "geometry.h"


int main() {
    Point *p1 = new Point(0,0);
    Point p2 = *new Point(0,5);
    Point p3 = *new Point(2,0);
    Point p4 = *new Point(2,5);
    
    Rectangle *rect = new Rectangle(p1,p2,p3,p4);
    
//    cout<<"The area is: "<<rect.calculateArea()<<endl;
    cout<<"HI"<<endl;
}
