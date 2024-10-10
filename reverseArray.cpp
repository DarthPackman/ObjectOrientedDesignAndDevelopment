#include <iostream>
using namespace std;

// @ Write a function to reverse the array using pointer arithmetic (i.e., without using array index notation).
void reverseArray(int *arr, int size) 
{
    // Initialize two pointers, one pointing to the start of the array and the other pointing to the end of the array
    int *start = arr;
    int *end = arr + size - 1;

    // Swap the elements pointed by the start and end pointers and move the pointers towards the center of the array
    while (start < end) 
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() 
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print the original array
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Reverse the array
    reverseArray(arr, size);

    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
