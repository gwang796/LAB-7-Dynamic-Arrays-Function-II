//
//  main.cpp
//  COMSC-210 | Lab 7: Dynamic Arrays & Functions II| Guo An Wang
//  IDE used: Xcode
//  Created by Guo An Wang on 9/11/25.
//

#include <iostream>
using namespace std;

void reverseArray(string *arr);

void displayArray(string *arr);

int main(int argc, const char * argv[]) {
    const int SIZE = 5;
    string *dArray = new string[SIZE];
    *(dArray + 0) = "James";
    *(dArray + 1) = "Adam";
    *(dArray + 2) = "Lauren";
    *(dArray + 3) = "Tucker";
    *(dArray + 4) = "Theo";
    //reverseArray(dArray);
    //displayArray(dArray);
    return 0;
}
void reverseArray(string *arr){
    
}

void displayArray(string *arr){
    
}
