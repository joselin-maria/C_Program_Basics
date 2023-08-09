1.Factorial Calculation:

#include <stdio.h>

int main() {
    int num, factorial = 1;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is %d\n", num, factorial);
    return 0;
}


2.Fibonacci Series:

#include <stdio.h>

int main() {
    int num, a = 0, b = 1, next_term;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= num; i++) {
        printf("%d, ", a);
        next_term = a + b;
        a = b;
        b = next_term;
    }

    return 0;
}


3.Print out the decimal equivalents of 1/2, 1/3, 1/4, . . . ,1/10.

#include<stdio.h>
Int main()
{
Int num, i;
Float a, sum=0;
Printf(“ Enter the number of terms : \n” ):
Scanf(“%d”,&num);
For (i=0; i<=num; i++)
a = sum + 1/ i;
printf(“ the decimal equivalents are : %f “,sum);
return0;
}

4.loops over a sequence.
 
#include<stdio.h>
Void main()
{
 Char j[7]=”Welcome”;
 For(int i=0 ; i<7 ; i++)
 Printf(“%c \n”, j[i]);
}

5.By considering the terms in the Fibonacci sequence whose values do not exceed four million,find the sum of the even-valued terms.

#include<stdio.h>
Int main()
{
Long sum =0;
Int n1 =0, n2=1,n3 , I;
For (i=2; i<34 ;++i)
{
N3=n1+n2;
If(n3%2==0){
Sum+=n3;
}
N1=n2;
N2=n3;
}
Printf(“sum=%ld\n”, sum);
Return 0;


6.Prime Number Check:

#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (is_prime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}