//
//  Lecture6.cpp
//  Training
//
//  Created by Adel Araji on 2017-02-03.
//  Copyright © 2017 Adel Araji. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "Lecture6.h"

using namespace std;



int main() {
    // Instance of student
    Student student1;
    student1.studentName = "Adel";
    student1.studentNumber = 4598715;

    // Instance of vector
    Vector vector1;
    vector1.startPoint.xCoordinate=0.1;
    vector1.startPoint.yCoordinate=0.2;
    vector1.endPoint.xCoordinate=0.4;
    vector1.endPoint.yCoordinate=0.6;
    
    // CHANGE USER CREDENTIALS
    student1.changeStudentCredentials("ADEL", 65465);
    
    cout<<"name is: "<<student1.studentName<<endl;
    cout<<"number is "<<student1.studentNumber<<endl;
    
    Point p1;
    cout<<p1.xCoordinate<<", "<<p1.yCoordinate<<endl;
}

void Student::changeStudentCredentials(char* name, int number){
    studentName = name;
    studentNumber = number;
}
