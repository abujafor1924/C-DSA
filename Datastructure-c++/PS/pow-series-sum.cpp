#include <iostream>

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; ++i) {
        sum += i * i;
    }

    std::cout << "The sum of the series 1^2 + 2^2 + 3^2 + ... + " << n << "^2 is: " << sum << std::endl;

    return 0;
}
