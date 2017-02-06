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
#include <array>
#include <type_traits>
#include "Assignment2.h"


#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))
//Used in part 6.3


using namespace std;

int main() {
    cout<<"Int sum: "<<calculateSum(3, 2)<<endl;
    cout<<"Double sum: "<<calculateSum(3.5, 2.6)<<endl;
    int arr[3]={1,2,3};
    int intArray[5]={1,2,3,4,5};
    cout<<"Sum of array content is: "<<calculateSum(arr, 3)<<endl;
    
    
    //*******5-PI problem, start***********************
    cout << "Value of PI is: "<<calculatePI(500000)<<endl;
    //Details are in fucntion below
    //*******PI problem, end***********************
    
    //*******6-Array problem, start***********************
    printArray(intArray,5);
    reverseArrayContent(intArray, 5);
    printArray(intArray, 5);
    
    int doubleDArray[WIDTH][LENGTH]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    int reversedArray[LENGTH][WIDTH]={{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}};
    print2DArray(3, 5, doubleDArray);
    
    transpose(doubleDArray, reversedArray);
    print2DArray(5, 3, reversedArray);
    //*******Array problem, end***********************
    
    
    //*******7-Pointer/Strings problem, start***********************
    int a=3;
    int b=5;
    swapValues(&a, &b);
    cout<<"Values of a and b are: "<<a<<", "<<b<<endl;
    swapValuesByCallByReference(a,b);
    cout<<"Values of a and b are: "<<a<<", "<<b<<endl;
    
    //Pointers
    int *ptr1 = &a;
    int *ptr2 = &b;
    *ptr1 = 1;
    *ptr2 = 2;
    swapPointers(&ptr1, &ptr2);
    
    cout<<"Pointer 1 points to value: "<<*ptr1<<endl;
    cout<<"Pointer 2 points to value: "<<*ptr2<<endl;
    //*******pointer/Strings problem, end***********************
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

//6 Array operations

//6.1 - printArray function
void printArray(int arr[], int lengthOfArray) {
    for(int i=0;i<lengthOfArray;i++) {
        if (i!=(lengthOfArray-1))
            cout<<arr[i]<<", ";
        else
            cout<<arr[i]<<endl;
    }
}

//6.2 - Reverse Array content
void reverseArrayContent(int arr[],int lengthOfArray) {
    int reversedArray[lengthOfArray];
    int j=0;
    for(int i=lengthOfArray-1;i>=0;i--) {
        reversedArray[j]=arr[i];
        j++;
    }
    for(int i=0;i<lengthOfArray;i++) {
        arr[i]=reversedArray[i];
    }
}

//6.3 - Transpose function
void transpose (const int input [][LENGTH], int output[][WIDTH]) {
    for(int i=0;i<WIDTH;i++){
        for (int j=0;j<LENGTH;j++){
            output[j][i]=input[i][j];
        }
    }
}

//Function that prints a 2D aray to be able to see the result
void print2DArray(int width,int length, int arr[WIDTH][LENGTH]) {
    for (int i=0;i<width;i++){
        for (int j=0;j<length;j++){
            cout << arr[i][j]<<"\t";
        }
        cout <<"\n";
    }
}
void print2DArray(int width,int length, int arr[LENGTH][WIDTH]) {
    for (int i=0;i<width;i++){
        for (int j=0;j<length;j++){
            cout << arr[i][j]<<"\t";
        }
        cout <<"\n";
    }
}


//7 - Pointers and strings
//7.3 - swap func using pointers
void swapValues(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//7.2 - swap fnc using call by reference
void swapValuesByCallByReference(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

//7.4 - pointer to pointer
void swapPointers(int **x, int **y) {
    int *temp ;
    temp = *x;
    *x=*y;
    *y=temp;
    
}
