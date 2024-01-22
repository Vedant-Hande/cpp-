#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 25, 5, 15, 30, 40, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    int searchNumber;
    cout << "Enter the number to search: ";
    cin >> searchNumber;

    // Pointer to the beginning of the array
    int *ptr = arr;

    // Flag to check if the number was found
    bool found = false;

    // Search for the number using the pointer
    for (int i = 0; i < n; i++)
    {
        if (*ptr == searchNumber)
        {
            found = true;
            cout << "Number found at index " << i << endl;
            break;
        }
        // Move the pointer to the next element
        ptr++;
    }

    if (!found)
    {
        cout << "Number not found in the array." << std::endl;
    }

    return 0;
}