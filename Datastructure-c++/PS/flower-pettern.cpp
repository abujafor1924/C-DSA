#include <iostream>

int main() {
    int n;

    // Get the number of petals for the flower
    std::cout << "Enter the number of petals for the flower: ";
    std::cin >> n;

    // Display the flower pattern
    for (int i = 1; i <= n; ++i) {
        // Print spaces before the first asterisk in each row
        for (int j = 1; j <= n - i; ++j) {
            std::cout << " ";
        }

        // Print asterisks for the left side of the petal
        for (int k = 1; k <= i; ++k) {
            std::cout << "*";
        }

        // Print asterisks for the right side of the petal
        for (int k = 1; k < i; ++k) {
            std::cout << "*";
        }

        // Move to the next line after printing a row of petals
        std::cout << std::endl;
    }

    // Print the stem of the flower
    for (int i = 1; i <= n / 2; ++i) {
        for (int j = 1; j <= n - 1; ++j) {
            std::cout << " ";
        }

        std::cout << "|" << std::endl;
    }

    return 0;
}
