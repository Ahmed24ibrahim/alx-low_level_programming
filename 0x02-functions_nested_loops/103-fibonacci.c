#include <stdio.h>

int main(void)
{
    long previous = 1, current = 2, sum = current;

    while (current + previous < 4000000)
    {
        long next = previous + current;

        if (next % 2 == 0)
            sum += next;

        previous = current;
        current = next;
    }

    printf("The sum of even Fibonacci numbers less than 4,000,000 is: %ld\n", sum);
    return 0;
}
