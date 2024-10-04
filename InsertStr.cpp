//Write a function that inserts a given string in the middle of another string. If
//the second string has an odd number of characters, the program first repeats the
//middle character before inserting.
//For example: insert "123" into "abcdefg", the result is "abcd123defg"
//Hint: Use funtions length(), insert()

#include <iostream>
#include <string>
using namespace std;

string insertInMiddle(const string& baseString, const string& insertString) {
    string result = baseString;
    // Calculate the middle index of the base string
    int middleIndex = baseString.length() / 2;
    // Check if the base string has an odd number of characters
    if (baseString.length() % 2 != 0) {
        // If the base string has an odd number of characters, repeat the middle character
        result.insert(middleIndex, 1, baseString[middleIndex]);
    }
    // Insert the insert string in the middle of the base string
    result.insert(middleIndex, insertString);
    return result;
}

int main() {
    string baseString = "abcdefg"; // Example base string with an odd number of characters
    string insertString = "123";

    string result = insertInMiddle(baseString, insertString);

    cout << "Original String: " << baseString << endl;
    cout << "Inserted String: " << insertString << endl;
    cout << "Result: " << result << endl;

    return 0;
}
