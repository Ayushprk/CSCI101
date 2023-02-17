#include <iostream>

int main() {
    int divisor, limit, sum = 0;

    std::cout << "Enter the number to divide by: ";
    std::cin >> divisor;

    std::cout << "Enter an upper limit: ";
    std::cin >> limit;

    for (int i = 1; i <= limit; i++) {
        sum += i % divisor;
    }

    std::cout << "The sum of the remainders is: " << sum << std::endl;

    return 0;
}