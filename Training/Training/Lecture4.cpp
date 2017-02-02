////
////  Lecture4.cpp
////  Training
////
////  Created by Adel Araji on 2017-02-02.
////  Copyright © 2017 Adel Araji. All rights reserved.
////
//
//
//#include <stdio.h>
//#include <iostream>
//#include <ctype.h>
//#include <stdlib.h>
//#include <string.h>
//#include "Lecture4.h"
//
//using namespace std;
//
//int main (){
//    int arr [4];
//    populateArray(arr);
//    printArray(arr);
//    int sum = calculateSumOfArray(arr, 4);
//    cout << "Sum is "<< sum << endl;
//    printTheMultiplicationTable();
//    char helloWorld[] = "Hello world";
//    
//    
//}
//
//// Function to populate array of 4
//void populateArray(int arr[4]){
//    for(int i=0;i<4;i++){
//        arr[i]=i+1;
//    }
//}
//
////Function to print array of 4
//void printArray(int arr[4]){
//    for (int i=0;i<4;i++){
//        cout << arr[i] <<endl;
//    }
//}
//
////Functin that calculates the sum of numbers insidde an array knowing the length of it
//int calculateSumOfArray(int arr[], int length){
//    int sum=0;
//    for (int i=0;i<length;i++){
//        sum = sum+arr[i];
//    }
//    return sum;
//}
//
////Function that prints out the multiplication table using 2D arrays
//void printTheMultiplicationTable() {
//    int arr[9][9];
//    
//    //Populate the side numbers
//    int VerticalArr[]={1,2,3,4,5,6,7,8,9};
//    int HorizontalArr[]={1,2,3,4,5,6,7,8,9};
//    
//    //Populate center of table and print it
//    for (int i=0;i<9;i++){
//        for (int j=0;j<9;j++){
//            arr[i][j]= VerticalArr[i]*HorizontalArr[j];
//            cout << arr[i][j]<<"\t";
//        }
//        cout <<"* "<<i+1<<"\n";
//    }
//}
//
