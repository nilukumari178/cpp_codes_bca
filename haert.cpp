#include <iostream>
#include <thread> // For sleep
#include <chrono> // For timing
using namespace std;

// ANSI escape codes for text colors
#define RED "\033[31m"
#define RESET "\033[0m" // Reset to default color

// Function to display the heart
void displayHeart(int size) {
    // Upper part of the heart (two arcs)
    for (int i = size / 2; i <= size; i += 2) {
        // Print spaces before the first arc
        for (int j = 1; j < size - i; j += 2) {
            cout << " ";
        }

        // Print the first arc
        for (int j = 1; j <= i; j++) {
            cout << RED << "*" << RESET;
        }

        // Print spaces between the arcs
        for (int j = 1; j <= size - i; j++) {
            cout << " ";
        }

        // Print the second arc
        for (int j = 1; j <= i; j++) {
            cout << RED << "*" << RESET;
        }

        cout << endl;
    }

    // Lower part of the heart (triangle)
    for (int i = size; i >= 1; i--) {
        // Print spaces before the triangle
        for (int j = 1; j <= size - i; j++) {
            cout << " ";
        }

        // Print the triangle
        for (int j = 1; j <= (i * 2) - 1; j++) {
            cout << RED << "*" << RESET;
        }

        cout << endl;
    }
}

// Main function for pulsating animation
int main() {
    int minSize = 4; // Minimum size of the heart
    int maxSize = 8; // Maximum size of the heart
    int delay = 200; // Delay in milliseconds

    while (true) { // Infinite animation loop
        // Pulse up (increase size)
        for (int size = minSize; size <= maxSize; size++) {
            system("clear"); // For Linux/Mac (use "cls" for Windows)
            displayHeart(size);
            this_thread::sleep_for(chrono::milliseconds(delay));
        }

        // Pulse down (decrease size)
        for (int size = maxSize; size >= minSize; size--) {
            system("clear"); // For Linux/Mac (use "cls" for Windows)
            displayHeart(size);
            this_thread::sleep_for(chrono::milliseconds(delay));
        }
    }

    return 0;
}
