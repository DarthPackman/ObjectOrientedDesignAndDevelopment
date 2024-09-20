// @: Create a class that imitates part of the functionality of the
// basic data type int. Call the class Int (note different
// capitalization). The only data in this class is an int
// variable.
class Int {
    public:
        int value;

        // @: Include member functions to initialize an Int to
        // 0, to initialize it to an int value, to display it,
        // and to add two Int values (hint: use two objects as two arguments).

        Int() {
            value = 0;
        }
        Int(int val) {
            value = val;
        }
        int Add(Int a, Int b) {
            return a.value + b.value;
        }
};

// @: Write a main function that uses this class by creating one
// uninitialized and two initialized Int values,
// adding the two initialized values and placing the result
// in the uninitialized one and display it.

#include <iostream>
using namespace std;

int main()
{
    Int a;
    Int b(5);
    Int c(10);

    a.value = a.Add(b, c);
    cout << a.value << endl;

    return 0;
}
