#include <iostream>

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int result = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            // If i is even, subtract it
            result -= i;
        } else {
            // If i is odd, add it
            result += i;
        }
    }

    std::cout << "The result of the series up to the " << n << "th term is: " << result << std::endl;

    return 0;
}
