//
//  Lecture9.cpp
//  Training
//
//  Created by Adel Araji on 2017-02-08.
//  Copyright © 2017 Adel Araji. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Lecture9.h"


//A template function, the type names ill be defines when we use the function , check main()
template <typename T, typename U>
U sum(T x, U y) {
    return x+y;
}


int main(){
    //Using template function
    cout<<sum<int,double>(2,3.5)<<endl;
    //Using template class
    Point<double> aDoublePoint (3.2,3.4);
    
    //Template calss with parameter
    StudentGroup<double, 5> smallGroup(17);
    cout<<smallGroup.getGrade()<<endl;
    cout<<smallGroup.getNumOfStudents()<<endl;
    //Random change 1
}
