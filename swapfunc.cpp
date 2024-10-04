//@:Write a function to check two numbers passed to it by reference
// and swaps the originals if the first one is larger than the second.
// For example: input: 7, 3 => output: 3,7
// input: 4,9 => output: 4,9

#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swapping: " << a << " " << b << endl;
    swap(a, b);
    cout << "After swapping: " << a << " " << b << endl;
    return 0;
}