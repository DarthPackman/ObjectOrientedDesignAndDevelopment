#include <iostream>
using namespace std;

//Write a function to add the contents of two arrays and store the result in a third array
//It accepts the addresses of the three arrays as arguments.
void addArray(float *array1, float *array2, float *resultArray, int size) {
    for (int i = 0; i < size; i++) {
        // Add the contents of the two arrays and store the result in the third array using pointer arrithemtic
        *resultArray = *array1 + *array2;
        // Move the pointers to the next element in the arrays
        array1++;
        array2++;
        resultArray++;
    }
}


int main() {
    const int SIZE = 5; // Define the size of the arrays
    float array1[SIZE] = {1.0, 2.0, 3.0, 4.0, 5.0}; // First initialized array
    float array2[SIZE] = {5.0, 4.0, 3.0, 2.0, 1.0}; // Second initialized array
    float resultArray[SIZE]; // Array to store results

    // Call the function to add the two arrays and store the sum in resultArray
    addArray(array1, array2, resultArray, SIZE);

    // Display the results
    cout << "Resulting array: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << resultArray[i] << " "; // Print the results
    }
    cout << endl;

    return 0;
}
