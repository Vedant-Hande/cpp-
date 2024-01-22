#include <iostream>
#include <cstring> // Include the C string library for strcat
using namespace std;
int main() {
    char str1[] = "Hello, ";
    char str2[] = "world!";
    char result[50]; // Create a character array to store the concatenated string

    // Pointers to the beginning of the strings
    char *ptr1 = str1;
    char *ptr2 = str2;
    char *ptrResult = result;

    // Copy the first string to the result array
    while (*ptr1) {
        *ptrResult = *ptr1;
        ptr1++;
        ptrResult++;
    }

    // Concatenate the second string to the result array
    while (*ptr2) {
        *ptrResult = *ptr2;
        ptr2++;
        ptrResult++;
    }

    // Null-terminate the concatenated string
    *ptrResult = '\0';

    // Print the concatenated string
    cout << "Concatenated String: " << result << std::endl;

    return 0;
}