#include <stdio.h>

/**
 * This function calculates the sum of even-valued Fibonacci numbers up to a given limit.
 *
 * @param limit The upper limit for Fibonacci numbers.
 * @return The sum of even-valued Fibonacci numbers up to the limit.
 */
int sumEvenFibonacci(int limit) {
    int a = 1, b = 2, sum = 0;

    while (b <= limit) {
        if (b % 2 == 0) {
            sum += b;
        }
        int next = a + b;
        a = b;
        b = next;
    }

    return sum;
}

int main() {
    int limit = 4000000;
    int result = sumEvenFibonacci(limit);

    printf("The sum of even-valued Fibonacci terms not exceeding %d is: %d\n", limit, result);

    return 0;
}
