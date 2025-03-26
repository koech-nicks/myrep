#include <iostream>
using namespace std;

// Function to calculate the sum of two arrays element-wise
void calculateSum(int array1[], int array2[], int result[], int size) {
    for (int i = 0; i < size; i++) { // Loop through each element of the arrays
        result[i] = array1[i] + array2[i]; // Add corresponding elements from array1 and array2
    }
}

int main() {
    int size; // Variable to store the size of the arrays

    // Prompt the user to input the size of the arrays
    cout << "Enter the size of the arrays: ";
    cin >> size;

    // Declare arrays with the specified size
    int array1[size], array2[size], result[size];

    // Prompt the user to input elements for the first array
    cout << "Enter elements of the first array:\n";
    for (int i = 0; i < size; i++) {
        cin >> array1[i]; // Read each element from the user
    }

    // Prompt the user to input elements for the second array
    cout << "Enter elements of the second array:\n";
    for (int i = 0; i < size; i++) {
        cin >> array2[i]; // Read each element from the user
    }

    // Call the function to compute the element-wise sum of the arrays
    calculateSum(array1, array2, result, size);

    // Display the result of the sum
    cout << "Sum of the two arrays:\n";
    for (int i = 0; i < size; i++) {
        cout << result[i] << " "; 
    }
    cout << endl; 
    

    return 0;
}
