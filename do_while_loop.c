1.Sum of Digits:

#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int originalNum = num;

    do {
        digit = num % 10;
        sum += digit;
        num /= 10;
    } while (num != 0);

    printf("Sum of digits of %d is %d\n", originalNum, sum);
    return 0;
}



2.Number Reversal:

#include <stdio.h>

int main() {
    int num, reversed_num = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int originalNum = num;

    do {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    } while (num != 0);

    printf("Reversed number of %d is %d\n", originalNum, reversed_num);
    return 0;
}


3.Factorial Calculation:

#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    int originalNum = num;

    do {
        factorial *= num;
        num--;
    } while (num > 0);

    printf("Factorial of %d is %llu\n", originalNum, factorial);
    return 0;
}