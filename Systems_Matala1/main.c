#include <stdio.h>
#include "NumClass.h"

    int Main()
    {
    int start;
    int end;

    // Get input range
    scanf("%d %d", &start, &end);

    printf("The Armstrong numbers are: ");
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    printf("\nThe Palindromes are: ");
    for (int i = start; i <= end; i++) {
        if (isPalindrome(i)) {
            printf("%d ", i);
        }
    }

    printf("\nThe Prime numbers are: ");
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    printf("\nThe Strong numbers are: ");
    for (int i = start; i <= end; i++) {
        if (isStrong(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}