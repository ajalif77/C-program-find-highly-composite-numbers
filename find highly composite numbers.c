#include <stdio.h>

int countDivisors(int num) {
    int count = 0;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int maxDivisors = 0;
    int highlyComposite = 0;

    for (int i = 1; i <= num; i++) {
        int divisors = countDivisors(i);

        if (divisors > maxDivisors) {
            maxDivisors = divisors;
            highlyComposite = i;
        }
    }

    if (highlyComposite == num) {
        printf("%d is a highly composite number.\n", num);
    } else {
        printf("%d is not a highly composite number.\n", num);
    }

    return 0;
}
