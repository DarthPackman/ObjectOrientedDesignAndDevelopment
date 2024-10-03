//Write a function that removes duplicate characters from a string (keeping only
//one instance of each character).
//For example: given string "accommodate", the function returns "acomdte"
//Hint: Use nested loop and a flag

#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(const string& input) {
    string result = "";
    // @: Implement the fuction here
    return result;
}

int main() {
    string inputString = "accommodate";

    string result = removeDuplicates(inputString);

    cout << "Original String: " << inputString << endl;
    cout << "String with duplicates removed: " << result << endl;

    return 0;
}
