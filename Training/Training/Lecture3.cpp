////
////  Lecture3.cpp
////  Training
////
////  Created by Adel Araji on 2017-02-02.
////  Copyright © 2017 Adel Araji. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include "Lecture3.h"// Have to include this if the header fucntion declarations is used here
//
//using namespace std;
//
//int main () {
//    int trial = raiseToPower(2, 3);
//    cout << "number is "<<trial<<"\n";
//    cout <<sayHello();
//    printNumber(1);
//    printString("This is a string");
//    cout<<"Trial func output is: "<<trialfunc(2, 3)<<endl;
//    cout <<fibonacci(5)<<endl;
//    
//    int numberToBeChanged = 4;
//    cout << changeNumber(numberToBeChanged)<<endl;
//    
//    int num1=4;
//    int num2=6;
//    swapNumbers(num1, num2);
//    cout <<"Num1 is "<<num1<<" and num2 is: "<<num2<<endl;
//    
//    
//}
//
////**********************************************************************************************
////********************************Implemented functions*****************************************
////**********************************************************************************************
//
////Function that raises a number o the power of some other number
//int raiseToPower(int firstNumber, int exponential) {
//    int result = 1;// this willl be the end result
//    for (int i=0;i<exponential;i++){
//        result = result*firstNumber;
//    }
//    return result;
//}
//
////Function that says hello
//char* sayHello() {
//    return "Hello y'all!\n";
//}
//
////Function that prints a number
//void printNumber (int number){
//    cout << number << endl;
//}
//
////Function that prints a string
//void printString(char* string){
//    cout << string << endl;
//}
//
////Trial function implemented after main function and declared in header file
//int trialfunc (int x, int y){
//    return x+y;
//}
//
////Fibonacci that returns the value depending in the index of the number
//int fibonacci(int n){
//    if (n==0 || n==1)
//        return 1;
//    else
//        return fibonacci(n-1)+fibonacci(n-2);
//}
//
////Function in which the parameter is passed by reference not by value
//int changeNumber(int &a){
//    a=17;
//    return a;
//}
//
////Function that swaps 2 numbers
//void swapNumbers(int &a, int &b){
//    int c;
//    c=a;
//    a=b;
//    b=c;
//}
