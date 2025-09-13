//
//  main.cpp
//  COMSC-210 | Lab 7: Dynamic Arrays & Functions II| Guo An Wang
//  IDE used: Xcode
//  Created by Guo An Wang on 9/11/25.
//

#include <iostream>
#include <string>
using namespace std;

string reverseArray(string *arr, int SIZE);

void displayArray(string *arr,int SIZE);

int main(int argc, const char * argv[]) {
    const int SIZE = 5;
    string *dArray = new string[SIZE];
    *(dArray + 0) = "James";
    *(dArray + 1) = "Adam";
    *(dArray + 2) = "Lauren";
    *(dArray + 3) = "Tucker";
    *(dArray + 4) = "Theo";
    cout << "Original array:";
    displayArray(dArray,SIZE);
    //reverseArray(dArray,SIZE);
    cout << "\nReversed array:";
    displayArray(dArray,SIZE);
    
    delete[] dArray;
    return 0;
}
string reverseArray(string *arr, int SIZE){
    
}

void displayArray(string *arr, int SIZE){
    for (int i = 0; i < SIZE; i++) {
        cout << " " << *(arr + i);
    }
    cout << endl;
}
