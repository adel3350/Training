////
////  Lecture5.cpp
////  Training
////
////  Created by Adel Araji on 2017-02-02.
////  Copyright © 2017 Adel Araji. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include "Lecture5.h"
//
//using namespace std;
//int main() {
//    //Declaring a pointer
//    int x=5;
//    int *ptr;
//    ptr = &x;
//    cout<<ptr<<endl;
//    *ptr=6;
//    cout<<*ptr<<endl;
//    cout<<x<<endl;
//    int value = 8;
//    cout<<value<<endl;
//    changeValueThroughAddress(&value);
//    cout<<value<<endl;
//    cout<< returnDatPointer(x)<<endl;
//    
//    //Arrays and pointers
//    int arr[3]={1,2,3};
//    int *pointer=arr;
//    cout<<"value of arr[0] is: "<<*pointer<<endl;
//    cout<<"value of arr[1] is: "<<*(pointer+1)<<endl;
//    cout<<"value of arr[2] is: "<<*(pointer+2)<<endl;
//    
//}
//
////Function to change value of a number
//void changeValueThroughAddress(int *ptr){
//    *ptr=69;
//}
//
////Function that returns address(pointer) of a value that we pass
//int *returnDatPointer(int x) {
//    return &x;
//}
