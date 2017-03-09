//
//  Lecture9.h
//  Training
//
//  Created by Adel Araji on 2017-02-08.
//  Copyright © 2017 Adel Araji. All rights reserved.
//

#ifndef Lecture9_h
#define Lecture9_h

#include <stdio.h>
#include <iostream>

using namespace std;

//Class template
template <typename T>
class Point{
private:
    T xCoordinate,yCoordinate;
public:
    Point(const T x, const T y):xCoordinate(x), yCoordinate(y){}
    T getX(){
        return xCoordinate;
    }
    T getY(){
        return yCoordinate;
    }
};

//Class template with a parameter
template <typename T, int N>
class StudentGroup {
private:
    int numberOfStudents = N;
    T overallGrade;
public:
    StudentGroup(const T grade):overallGrade(grade){};
    T getGrade(){
        return overallGrade;
    }
    int getNumOfStudents(){
        return numberOfStudents;
        //Random change 2
        //Random change 3
    }
};

#endif /* Lecture9_h */
