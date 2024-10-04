//Write a function that removes duplicate characters from a string (keeping only
//one instance of each character).
//For example: given string "accommodate", the function returns "acomdte"
//Hint: Use nested loop and a flag

#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(const string& input) {
    string result = "";
    // Iterate over the input string
    for (int i = 0; i < input.length(); i++) {
        bool duplicate = false;
        // Check if the current character is already in the result string
        for (int j = 0; j < result.length(); j++) {
            if (input[i] == result[j]) {
                duplicate = true;
                break;
            }
        }
        // If the character is not a duplicate, add it to the result string
        if (!duplicate) {
            result += input[i];
        }
    }
    return result;
}

int main() {
    string inputString = "accommodate";

    string result = removeDuplicates(inputString);

    cout << "Original String: " << inputString << endl;
    cout << "String with duplicates removed: " << result << endl;

    return 0;
}
