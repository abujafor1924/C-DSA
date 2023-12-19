#include <iostream>

int main() {
    int n;

    // Get the number of rows for the diamond pattern
    std::cout << "Enter the number of rows for the diamond pattern: ";
    std::cin >> n;

    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        // Spaces before the stars
        for (int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }

        // Stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Spaces before the stars
        for (int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }

        // Stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    return 0;
}

