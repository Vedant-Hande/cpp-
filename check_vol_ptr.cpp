#include <iostream>
#include <cctype> // Include the C Standard Library for character manipulation
using namespace std;
int main() {
    const int MAX_LENGTH = 100; // Maximum string length
    char str[MAX_LENGTH];      // Character array to store the string
    char *ptr;                 // Pointer to the string
    int vowelCount = 0;        // Counter for vowels

    cout << "Enter a string: ";
    cin.getline(str, MAX_LENGTH); // Read a line of text

    // Initialize the pointer to the beginning of the string
    ptr = str;

    // Iterate through the string using the pointer
    while (*ptr != '\0') {
        // Convert the character to lowercase for case-insensitive matching
        char lowercaseChar = std::tolower(*ptr);

        // Check if the character is a vowel
        if (lowercaseChar == 'a' || lowercaseChar == 'e' ||
            lowercaseChar == 'i' || lowercaseChar == 'o' || lowercaseChar == 'u') {
            vowelCount++;
        }

        // Move the pointer to the next character
        ptr++;
    }
    
    cout << "Number of vowels in the string: " << vowelCount << std::endl;

    return 0;
}