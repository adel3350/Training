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



int main() {
 
}
