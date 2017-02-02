//
//  Assignment2.cpp
//  Training
//
//  Created by Adel Araji on 2017-02-02.
//  Copyright © 2017 Adel Araji. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <cmath>
#include "Assignment2.h"

using namespace std;

int main() {
    cout<<"Int sum: "<<calculateSum(3, 2)<<endl;
    cout<<"Double sum: "<<calculateSum(3.5, 2.6)<<endl;
    int arr[3]={1,2,3};
    cout<<"Sum of array content is: "<<calculateSum(arr, 3)<<endl;
    
    
    //*******PI problem, start***********************
    cout << "Value of PI is: "<<calculatePI(500000)<<endl;
    //Details are in fucntion below
    //*******PI problem, end***********************
    
    
}

//4.1 Writing a function that calculates the sum
int calculateSum(const int x, const int y) {
    return x+y;
}
double calculateSum(const double x, const double y) {
    return x+y;
}

//4.3 Sum of 3 -4 integers
int calculateSum(const int x, const int y, const int z) {
    return x+y+z;
}
//int calculateSum(const int x, const int y, const int z, const int w) {
//    return x+y+z+w;
//}

//4.4 Sum of 2-4 integers usig default arguments
int calculateSum(const int a, const int b, const int c=0, const int d=0) {
    return a+b+c+d;
}

//4.5 sum of an arbitrary number of integers
//int calculateSum(int array[], int lenghOfArray) {
//    int sum =0;
//    for (int i=0; i<lenghOfArray;i++){
//        sum+=array[i];
//    }
//    return sum;
//}

//4.6 Same as 4.5 but using recursion
int calculateSum(int array[], int lenghOfArray) {
    //Base condition
    if (lenghOfArray==1)
        return array[0];
    else
        return array[0]+calculateSum(array+1, lenghOfArray-1);
}

//5 Circle problem

//5.1 - RandomNumbers for x and y between 0 and 1
void generateRandomThrow(double *x, double *y) {
    *x = (double)rand()/RAND_MAX;
    *y = (double)rand()/RAND_MAX;
}

//5.2 - Simulate throws to know # of darts inside out of a certain number
int simulateThrows(int numOfSimulations) {
    int numOfDartsInsideCircle=0;
    double x,y;//Coordinates for the dart
    for (int i=0;i<numOfSimulations;i++){
        //First step is to throw a new set of darts
        generateRandomThrow(&x, &y);
        //Second step is to verify if throw is inside the circle
        double dartDistance =sqrt(x*x+y*y);
        if (dartDistance<=1)
            numOfDartsInsideCircle++;
    }
    return numOfDartsInsideCircle;
}

//5.3 - Calculating PI
double calculatePI(int numOfSimulations) {
    int numOfDartsInside = simulateThrows(numOfSimulations);
    double fraction = (double)numOfDartsInside/numOfSimulations;
    
    return fraction*4;
}
