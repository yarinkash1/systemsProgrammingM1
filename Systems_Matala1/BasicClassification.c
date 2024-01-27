
#include "NumClass.h"
#define TRUE 1
#define FALSE 0


int isPrime(int x)
{
    if(x==1 || x==2)
    {
        return TRUE;
    }
    int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0) {
            return FALSE;
        }
    }
    return TRUE;
}

//helper function:
int factorial (int x)
{
    if(x==0 || x==1)
    {
        return 1;
    }
    return x* fact(x-1);
}

int isStrong(int x)
{
    int sum=0;
    int copyX=x;
    while (copyX>0)
    {
        sum=sum+ factorial(copyX%10);
        copyX=copyX/10;
    }
    if(sum==x) {
        return TRUE;
    }
    return FALSE;
}