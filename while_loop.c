1.Sum of Natural Numbers:

#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("Sum of first %d natural numbers is %d\n", n, sum);
    return 0;
}

2.Reverse a Number:

#include <stdio.h>

int main() {
    int num, reversed_num = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversed_num);
    return 0;
}


3.Palindrome Check:

#include <stdio.h>

int main() {
    int num, original_num, reversed_num = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original_num = num;

    while (num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }

    if (original_num == reversed_num) {
        printf("%d is a palindrome.\n", original_num);
    } else {
        printf("%d is not a palindrome.\n", original_num);
    }

    return 0;
}


4.Table of a Number:

#include <stdio.h>

int main() {
    int num, i = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);

    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}


5.Count Digits in a Number:

#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        num /= 10;
        count++;
    }

    printf("Number of digits: %d\n", count);
    return 0;



6.Power Calculation:

#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    while (exponent != 0) {
        result *= base;
        exponent--;
    }

    printf("%d^%d = %lld\n", base, exponent, result);
    return 0;
}


7.Asks the user for a number, and print a countdown from that number to zero.

#include<stdio.h>
Void main()
{
 Int i , num;
 Printf(“Enter a number :”);
 Scanf(“%d”,&y);
 For ( i=num; i>=0;i--)
{
Printf(“ %d\n”,i);
}
}


