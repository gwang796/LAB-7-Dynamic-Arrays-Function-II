//
//  main.cpp
//  COMSC-210 | Lab 7: Dynamic Arrays & Functions II| Guo An Wang
//  IDE used: Xcode
//  Created by Guo An Wang on 9/11/25.
//

#include <iostream>
#include <string>
using namespace std;

//function reverseArray reverses the order of a dynamic string array
//arguments: dynamic string array, int SIZE
//returns: dynamic string array
string reverseArray(string *arr, int SIZE);

//function displayArray displays a dynamic string array
//arguments: dynamic string array, int SIZE
//returns: none
void displayArray(string *arr,int SIZE);

int main(int argc, const char * argv[]) {
    const int SIZE = 5; //declare SIZE of array
    string *dArray = new string[SIZE]; //declare dynamic string array
    //hard code inputted strings into dynamic string array
    *(dArray + 0) = "James";
    *(dArray + 1) = "Adam";
    *(dArray + 2) = "Lauren";
    *(dArray + 3) = "Tucker";
    *(dArray + 4) = "Theo";
    
    //printing output
    cout << "Original array:";
    displayArray(dArray,SIZE); //calling displayArray
    reverseArray(dArray,SIZE); //calling reverseArray
    cout << "\nReversed array:";
    displayArray(dArray,SIZE); //calling displayArray
    
    delete[] dArray; //frees up memory
    return 0;
}

string reverseArray(string *arr, int SIZE){
    string *left = arr; //start of dynamic array
    string *right = arr + (SIZE - 1); //end of dynamic array
    while (left < right) { //middle name does not move
        string temp = *left; //string temp copies value of *left(first string)
        *left = *right; // left becomes right
        *right = temp; //right becomes old left
        left++; //moving right to middle of array
        right--; //moving left to middle of array
    }
    return *arr;
}

void displayArray(string *arr, int SIZE){
    for (int i = 0; i < SIZE; i++) {
        cout << " " << *(arr + i);
    }
    cout << endl;
}
