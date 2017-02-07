//
//  Assignment3.h
//  Training
//
//  Created by Adel Araji on 2017-02-06.
//  Copyright © 2017 Adel Araji. All rights reserved.
//

#ifndef Assignment3_h
#define Assignment3_h

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Point {
public:
    int xCoordinate,yCoordinate;
    static int counter ;//static variable
    Point(int x, int y){
        this->xCoordinate=x;
        this->yCoordinate=y;
        counter++;
    }
    Point(){counter++;};
    ~Point(){counter--;}
    static int getCounter(){return counter;};//static function
};

#endif /* Assignment3_h */
