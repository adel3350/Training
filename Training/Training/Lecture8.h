//
//  Lecture8.h
//  Training
//
//  Created by Adel Araji on 2017-02-06.
//  Copyright © 2017 Adel Araji. All rights reserved.
//

#ifndef Lecture8_h
#define Lecture8_h

#include <iostream>
#include <stdio.h>

using namespace std;

class Integer {
public:
    int val;
    Integer(){
        val=0;//default constructor
    }
    //Destructor to delete memory and avoid memory leakage(having unused memory)
    ~Integer(){}
};

class IntegerWrapper {
public:
    Integer val;
    IntegerWrapper(){
        cout<<"Inside integer wrapper constructor"<<endl;
    }
    ~IntegerWrapper(){}
};

class RandomClass {
public:
    int value;
    RandomClass(int val =0){
        this->value=val;//equivalent to (*this).value=val
    }
    ~RandomClass(){
        cout<<"destructor invoked"<<endl;//called at the end when the instance is no longer used
    }
};

class IntegerArray {
public:
    int *data;
    int size;
    IntegerArray(int mySize){
        this->size = mySize;
        data = new int[size];
    }
    ~IntegerArray(){//Deleting data in destructor
        delete [] data;
    }
};


#endif /* Lecture8_h */
