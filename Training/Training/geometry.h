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
//#include "geometry.cpp"


using namespace std;

//3 - Point
class Point {
private:
    double xCoordinate,yCoordinate;
public:
    Point() {
        this->xCoordinate=0;
        this->yCoordinate=0;
    }
    Point(double x, double y) {
        this->xCoordinate=x;
        this->yCoordinate=y;
    }
    double getX() const {
        return this->xCoordinate;
    }
    double getY() const {
        return this->yCoordinate;
    }
    void setX(const double new_x) {
        this->xCoordinate=new_x;
    }
    void setY(const double new_y) {
        this->yCoordinate=new_y;
    }
        
};

//4 - PointArray
class PointArray {
private:
    Point *array;
    int lengthOfArray;
public:
    //Default constructor setting size of Point Array to 0
    PointArray() {
        this->lengthOfArray=0;
        array = new Point[lengthOfArray];
    }
    //Constuctor that takes length and an array as input an initializes a PointArray object by copying the values
    PointArray(const Point points[], const int size){
        this->lengthOfArray=size;
        array = new Point[size];
        for(int i=0;i<size;i++){
            array[i]=points[i];
        }
    }
    //Copy constructor
    PointArray(const PointArray &pv) {
        this->lengthOfArray=pv.lengthOfArray;
        array=new Point[lengthOfArray];
        for (int i=0;i<lengthOfArray;i++){
            array[i] = pv.array[i];
        }
    }
    //Destructor
    ~PointArray() {
        delete [] array;
    }
    //Resize
    void resize(int newSize) {
        Point *p = new Point[newSize];
        if (newSize<lengthOfArray){
            for(int i=0;i<newSize;i++){
                p[i]=array[i];
            }
        }else {
            for(int i=0;i<lengthOfArray;i++){
                p[i]=array[i];
            }
        }
        delete []array;
        array = p;
        lengthOfArray=newSize;
    }
    //Adding a point at the end of the array
    void push_back(const Point &p) {
        resize(lengthOfArray+1);
        array[lengthOfArray-1]=p;
    }
    //Insert a point at an arbitrary position of the array
    void insert(const int position, const Point &p) {
        resize(lengthOfArray+1);
        for(int i=position;i<lengthOfArray;i++) {
            array[i+1]=array[i];
        }
        array[position]=p;
    }
    //Removing a point from array
    void remove(const int pos) {
        for (int i=pos+1;i<lengthOfArray;i++){
            array[i-1]=array[i];
        }
        resize(lengthOfArray-1);
    }
    //Get size of array
    const int getSize() const {
        return lengthOfArray;
    }
    //Set size to 0 and remove everything from array
    void clear() {
        resize(0);
    }
    //Get a point at a certain position
    Point *get(const int position){
        if (position<=lengthOfArray)
            return &array[position];
        else
            return NULL;
    }
};

class Polygon {
protected:
    PointArray arrayOfPoints;
    static int polygonCounter;
public:
    //Constructor
    Polygon(Point array, int arrayLength) {
        this->arrayOfPoints = *new PointArray(&array,arrayLength);
        polygonCounter++;
    }
    //Calculate the area, will be implemented in the subclasses
    virtual double CalulateArea()  =0;
    
    
    // returns the number of polygons
    int getNumPolygons() {
        return polygonCounter;
    }
    //Returns the number of sides in the polygon
    int getNumSides() {
        return arrayOfPoints.getSize();
    }
    //Returns a pointer to the array of points
    const PointArray *getPoints() const{
        return &arrayOfPoints;
    }
};

class Rectangle:public Polygon {
private:
    Point *updateConstructorPoints(const Point &p1, const Point &p2,const Point &p3, const Point &p4=Point(0,0)){
        Point constructorPoints[4];
        constructorPoints[0]=p1;
        constructorPoints[1]=p2;
        constructorPoints[2]=p3;
        constructorPoints[3]=p4;
        return constructorPoints;
    }
public:
    //constructing a rectangle from 2 points
    Rectangle(Point p1, Point p2): Polygon(*updateConstructorPoints(p1,p2,Point(p1.getX(),p2.getY()),Point(p2.getX(),p1.getY())),4){}
    
    //Constructing a rectangle from 4 ints
    Rectangle(Point p1, Point p2, Point p3, Point p4): Polygon(*updateConstructorPoints(p1,p2,p3,p4),4){}
    
    //Calculate area
    double calculateArea()  {
        double length,width,area;
        double x,y,nextX,nextY;
        
        int i=0;
        while(true){
            Point p = *arrayOfPoints.get(0);
            Point nextP = *arrayOfPoints.get(i+1);
            x = p.getX();
            y = p.getY();
            nextX = nextP.getX();
            nextY = nextP.getY();
            
            if(x!=nextX && y!=nextY)
                break;
            else
                continue;
            i++;
        }
        length = abs(nextX-x);
        width = abs(nextY-y);
        area = length*width;
        
        return area;
    }
};



#endif /* geometry_h */
