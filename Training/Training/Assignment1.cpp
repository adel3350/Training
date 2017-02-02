////
////  Assignment1.cpp
////  Training
////
////  Created by Adel Araji on 2017-02-02.
////  Copyright © 2017 Adel Araji. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//
//#define PI 3.14
//#define NEWLINE '\n'
//
//
//int main () {
//    
//    //Calculation the surface of a circle
//    double radius = 3.4;
//    double surfaceOfCircle;
//    surfaceOfCircle = PI*(radius*radius);
//    std::cout << "the area of the circle is "<< surfaceOfCircle<<NEWLINE;
//    
//    int a=1;
//    int b = a--;
//    std::cout << "b is : "<< b << NEWLINE;
//    
//    //Using the ++a operator
//    for (int x=0; x<10;){
//        std::cout <<++x<<NEWLINE;
//    }
//    
//    int c=1;
//    c%=5;
//    std::cout << "c is "<< c <<NEWLINE;
//    
//    // Replace the if-else statemet by the ternary operator
//    int result = (3>2)?3:2;
//    std::cout << result<<NEWLINE;
//    
//    //Printing first 10 numbers whith while loop, and using break
//    int i=0;
//    while (true) {
//        i++;
//        std::cout << "num is "<< i << NEWLINE;
//        if (i==10)
//            break;
//        
//    }
//    
//    //Assignment 1, part 1
//    const char * toBePrinted = "Hello World!";
//    std::cout << toBePrinted << NEWLINE;
//    
//    //Assignment 1, part 2
//    //With a for loop
//    int input;
//    std::cout << "Enter number of times you want to print the message\n";
//    std::cin >> input;
//    for (int i=0;i<input;i++){
//        std::cout << "Hello Wolrd!\n";
//    }
//    //With a while loop
//    std::cout << "*****************\n";
//    int z=1;
//    while(z<=input){
//        std::cout << "Hello World!\n";
//        z++;
//    }
//    // With a do..while loop
//    std::cout << "*****************\n";
//    do {
//        std::cout << "Hello World!\n";
//        input--;
//    }
//    while (input>0);
//}
