#include <iostream>
using namespace std;
int main() {
    char str[] = "Hello, World!";
    char *ptr = str; // Pointer to the beginning of the string

    int length = 0;

    // Iterate through the string using the pointer
    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    cout << "Length of the string: " << length << endl;

    return 0;
}