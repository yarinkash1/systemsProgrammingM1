#include "NumClass.h"
#define TRUE 1
#define FALSE 0

int numLength(int x)
{
    if(x==0)
    {
        return 0;
    }
    return 1+ numLength(x/10);
}

int power(int base ,int pow)
{
    if (pow == 0)
    {
        return 1;
    }
    else
    {
        return base * power(base, pow - 1);
    }
}

int isArmstrongHelper(int x,int original,int n) {
    if (x==0) {
        return (original == 0); // Check if the original number is also 0
    } else {
        int digit = x % 10;
        return (power(digit,n)+isArmstrongHelper(x/10,original,n));
    }
}

int isArmstrong(int x) {
    if (x==0) {
        return TRUE; // 0 is an Armstrong number
    } else {
        int n =numLength(x);
        return (isArmstrongHelper(x,x,n)==x);
    }
}

int isPalindrome(int x)
{


    int numDigits= numLength(x);
    if (numDigits<=1) {
        return TRUE;
    }
    int firstDigit =x/power(10,numDigits-1);
    int lastDigit =x%10;

    if (firstDigit!=lastDigit)
    {
        return FALSE;
    }
    int remainNumber=(x%(int)power(10,numDigits-1))/10;

    return isPalindrome(remainNumber);
}