//
//  geometry.h
//  Training
//
//  Created by Adel Araji on 2017-02-06.
//  Copyright © 2017 Adel Araji. All rights reserved.
//

#ifndef geometry_h
#define geometry_h

#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>



using namespace std;

//********************************************Point***************************************************
class Point{
private:
    int xCoordinate, yCoordinate;
public:
    Point(int x=0,int y=0);
    ~Point(){}
    int getX() const;
    int getY() const;
    void setX(const int);
    void setY(const int);
    void toString();
};
//*****************************************PointArray*************************************************
class PointArray{
private:
    int lengthOfArray;
    Point *points;
public:
    PointArray();
    PointArray(const Point[], const int);
    PointArray(const PointArray &pv);
    ~PointArray(){
        delete [] points;
    }
    void resize(int);
    void push_back(const Point &p);
    void insert(const int, const Point &p);
    void remove(const int pos);
    const int getSize() const;
    void clear();
    Point *get(const int position);
    void tostring();
};
//*******************************************Polygon**************************************************
class Polygon{
protected:
    PointArray array;
    static int numOfPolygons;
public:
    Polygon(Point arrayOfPoints[],const int lengthOfArray);
    Polygon(const PointArray &pt);
    ~Polygon(){numOfPolygons--;}
    virtual int calculateArea() = 0;
    int getNumPolygons();
    int getNumSides();
    const PointArray *getPoints() const;
};
//*******************************************Rectangle************************************************
class Rectangle: public Polygon{
public:
    Rectangle(const Point &p1, const Point &p2);
    Rectangle(const Point &p1,const Point &p2,const Point &p3,const Point &p4);
    ~Rectangle(){}
    int calculateArea();
};
//*******************************************Triangle*************************************************
class Triangle: public Polygon{
public:
    Triangle(const Point &p1, const Point &p2, const Point &p3);
};
#endif /* geometry_h */
