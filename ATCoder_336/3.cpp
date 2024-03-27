#include <iostream>
#include <cmath>

long long findNthGoodInteger(long long n) {
    long long currentNumber = 0;

    // Keep generating good integers until we reach the N-th one
    while (n > 0) {
        // Check if the current number is a good integer
        bool isGood = true;
        long long temp = currentNumber;

        while (temp > 0) {
            int digit = temp % 10;
            if (digit % 2 != 0) {
                isGood = false;
                break;
            }
            temp /= 10;
        }

        // If the current number is good, decrement N
        if (isGood) {
            n--;
        }

        // Move to the next number
        currentNumber++;
    }

    return currentNumber - 1;
}

int main() {
    long long N;

    // Input N
    std::cout << "Enter the value of N: ";
    std::cin >> N;

    // Check if the input is valid
    if (N < 1 || N > 1e12) {
        std::cout << "Invalid input. N should be between 1 and 10^12." << std::endl;
        return 1; // Return an error code
    }

    // Find and output the N-th smallest good integer
    long long result = findNthGoodInteger(N);
    std::cout << "The " << N << "-th smallest good integer is: " << result << std::endl;

    return 0;
}

