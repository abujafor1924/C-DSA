#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    long long sum = 0;

    for (int i = 1; i <= n; ++i) {
        sum += static_cast<long long>(std::pow(i, i));
    }

    std::cout << "The sum of the series 1^1 + 2^2 + 3^3 + ... + " << n << "^" << n << " is: " << sum << std::endl;

    return 0;
}

