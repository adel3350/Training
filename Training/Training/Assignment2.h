//
//  Assignment2.h
//  Training
//
//  Created by Adel Araji on 2017-02-02.
//  Copyright © 2017 Adel Araji. All rights reserved.
//

#ifndef Assignment2_h
#define Assignment2_h

const int LENGTH=5;
const int WIDTH=3;

int calculateSum(const int x, const int y);
double calculateSum(const double x, const double y);
int calculateSum(int array[], int lenghOfArray);
void generateRandomThrow(double *x, double *y);
int simulateThrows(int numOfSimulations);
double calculatePI(int numOfSimulations);
void printArray(int arr[], int lengthOfArray);
void reverseArrayContent(int arr[],int lengthOfArray);
void print2DArray(int width, int length, int arr[WIDTH][LENGTH]);
void print2DArray(int width,int length, int arr[LENGTH][WIDTH]);
void transpose (const int input [][LENGTH], int output[][WIDTH]);
void swapValues(int *a, int *b);
void swapValuesByCallByReference(int &a, int &b);
void swapPointers(int **a, int **b);

#endif /* Assignment2_h */
