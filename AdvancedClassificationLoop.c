#include "NumClass.h"
#define TRUE 1
#define FALSE 0

//Helper function
int numLength(int x)
{
    if(x==0)
    {
        return 0;
    }
    return 1+ numLength(x/10);
}
//Helper function
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

int isArmstrong(int x)
{
    int copyX=x;
    int sum=0;
    int i=numLength(x);

    while(copyX>0)
    {
        sum=sum+ power(copyX%10,i);
        copyX=copyX/10;
    }
    if(sum==x) {
        return TRUE;
    }

    return FALSE;
}

int isPalindrome(int x)
{
    int numDigs=numLength(x);
    if (numDigs==1) // if x is a single digit number it is a palindrome
    {
        return TRUE;
    }
    int getLeftDigit=1;
    for (int i=1;i<numDigs;i++)
    {
        getLeftDigit=getLeftDigit*10;
    }
    int leftDig;
    int rightDig;
    while (x>0)
    {
        leftDig=x/getLeftDigit; //will get the most left digit
        rightDig=x%10; // will get the most right digit
        if (rightDig!=leftDig)
        {
            return FALSE;
        }
        x =(x%getLeftDigit); //removes left digit
        x=x/10; //removes right digit
        getLeftDigit/=100; // since we removed two digits from x we need to divide by 10*10=100 for the next iteration
    }
    return TRUE;
}

