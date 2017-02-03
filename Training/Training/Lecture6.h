//
//  Lecture6.h
//  Training
//
//  Created by Adel Araji on 2017-02-03.
//  Copyright © 2017 Adel Araji. All rights reserved.
//

#ifndef Lecture6_h
#define Lecture6_h

#include <stdio.h>
#include <iostream>


class Point {
public:
    double xCoordinate;
    double yCoordinate;
    
    //Constructor
    Point() {
        xCoordinate = 0;
        yCoordinate = 0;
    }
};

class Vector {
    
public:
    Point startPoint;
    Point endPoint;
};

class Student {
    
public:
    char *studentName;
    int studentNumber;
    
    void changeStudentCredentials(char* name, int number);
};



#endif /* Lecture6_h */
