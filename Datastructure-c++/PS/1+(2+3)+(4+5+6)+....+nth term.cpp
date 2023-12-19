#include <iostream>

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int sum = 0;
    int term = 1;

    for (int i = 1; i <= n; ++i) {
        int groupSum = 0;

        for (int j = 1; j <= i; ++j) {
            groupSum += term;
            term++;
        }

        sum += groupSum;
    }

    std::cout << "Sum of the series: " << sum << std::endl;

    return 0;
}


