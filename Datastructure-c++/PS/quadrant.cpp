#include <iostream>

int main() {
    // Get user input for coordinates
    double x, y;
    std::cout << "Enter the x-coordinate: ";
    std::cin >> x;
    std::cout << "Enter the y-coordinate: ";
    std::cin >> y;

    // Determine the quadrant
    if (x > 0 && y > 0) {
        std::cout << "The point is in the first quadrant." << std::endl;
    } else if (x < 0 && y > 0) {
        std::cout << "The point is in the second quadrant." << std::endl;
    } else if (x < 0 && y < 0) {
        std::cout << "The point is in the third quadrant." << std::endl;
    } else if (x > 0 && y < 0) {
        std::cout << "The point is in the fourth quadrant." << std::endl;
    } else if (x == 0 && y == 0) {
        std::cout << "The point is at the origin." << std::endl;
    } else if (x == 0) {
        std::cout << "The point is on the y-axis." << std::endl;
    } else if (y == 0) {
        std::cout << "The point is on the x-axis." << std::endl;
    }

    return 0;
}

