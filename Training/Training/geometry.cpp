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

//********************************************Point***************************************************
Point::Point(int x, int y){
    xCoordinate=x;
    yCoordinate=y;
}

int Point::getX() const{
    return xCoordinate;
}

int Point::getY() const{
    return yCoordinate;
}

void Point::setX(const int x){
    xCoordinate=x;
}

void Point::setY(const int y){
    yCoordinate=y;
}
void Point::toString(){
    cout<<"("<<this->getX()<<","<<this->getY()<<")"<<endl;
}
//********************************************PointArray**********************************************
PointArray::PointArray(){
    lengthOfArray=0;
    points = new Point[0];
}

PointArray::PointArray(const Point points[], const int size){
    lengthOfArray=size;
    this->points=new Point[size];
    for(int i=0;i<size;i++){
        this->points[i]=points[i];
    }
}

PointArray::PointArray(const PointArray &pv){
    lengthOfArray=pv.lengthOfArray;
    this->points=new Point[lengthOfArray];
    for(int i=0;i<lengthOfArray;i++){
        this->points[i] = pv.points[i];
    }
}

void PointArray::resize(int newSize){
    PointArray *temp = new PointArray(*this);
    if (newSize<this->lengthOfArray) {
        for(int i=0;i<newSize;i++){
            temp->points[i]=this->points[i];
        }
        for(int i=newSize;i<this->lengthOfArray;i++){
            this->points[i]=NULL;
        }
    }else{
        for(int i=0;i<lengthOfArray;i++){
            temp->points[i]=this->points[i];
        }
    }
    this->lengthOfArray=newSize;
    for(int i=0;i<lengthOfArray;i++){
        this->points[i]=temp->points[i];
    }
    delete temp;
}

void PointArray::push_back(const Point &p){
    this->points[lengthOfArray]=p;
    lengthOfArray++;
}

void PointArray::insert(const int position, const Point &p){
    for(int i=lengthOfArray;i>position;i--){
        this->points[i]=this->points[i-1];
    }
    this->points[position]=p;
    lengthOfArray++;
}

void PointArray::remove(const int pos){
    for(int i=pos;i<lengthOfArray;i++){
        this->points[i]=this->points[i+1];
    }
    this->points[lengthOfArray-1]=NULL;
    lengthOfArray--;
}

const int PointArray::getSize() const{
    return this->lengthOfArray;
}

void PointArray::clear(){
    for(int i=0;i<lengthOfArray;i++){
        this->points[i]=NULL;
    }
    this->lengthOfArray=0;
}

Point *PointArray::get(const int position){
    if(this->lengthOfArray==0 || position>lengthOfArray-1 || position<0)
        return NULL;
    else{
        return &this->points[position];
    }
}

void PointArray::tostring(){
    cout<<"*****"<<endl;
    for(int i=0;i<lengthOfArray;i++){
        cout<<"("<<this->points[i].getX()<<","<<points[i].getY()<<")"<<endl;
    }
    cout<<"*****"<<endl;
}
//*******************************************Polygon**************************************************

Polygon::Polygon(Point arrayOfPoints[],int lengthOfArray): array(PointArray(arrayOfPoints,lengthOfArray)) {
    numOfPolygons++;
}

Polygon::Polygon(const PointArray &pt) {
    this->array=pt;
    numOfPolygons++;
}

int Polygon::numOfPolygons=0;

int Polygon::getNumPolygons() {
    return numOfPolygons;
}

int Polygon::getNumSides() {
    return array.getSize();
}

const PointArray *Polygon::getPoints() const {
    return &array;
}
//*******************************************Rectangle************************************************
Point constructorPoints[4];

Point *updateConstructorPoints(const Point &p1,const Point &p2,const Point &p3, const Point &p4=Point(0,0)){
    constructorPoints[0]=p1;
    constructorPoints[1]=p2;
    constructorPoints[2]=p3;
    constructorPoints[3]=p4;
    return constructorPoints;
}

Rectangle::Rectangle(const Point &p1, const Point & p2): Polygon(updateConstructorPoints(p1, Point(p2.getX(),p1.getY()),p2, Point(p1.getX(),p2.getY())),4){}

Rectangle::Rectangle(const Point &p1,const Point &p2,const Point &p3,const Point &p4): Polygon(updateConstructorPoints(p1, p2, p3, p4),4){}

int Rectangle::calculateArea(){
    int width, length;
    length=abs(constructorPoints[0].getX()-constructorPoints[1].getX());
    width=abs(constructorPoints[0].getY()-constructorPoints[2].getY());
    return width*length;
}
//*******************************************Triangle*************************************************
Triangle::Triangle(const Point &p1, const Point &p2, const Point &p3): Polygon(updateConstructorPoints(p1, p2, p3),3){}
