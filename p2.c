#include<stdio.h>

// FUNCTION DECLARATION
int sumOfDigits(int n);

int main()
{
    int num;

    printf("Enter a Number:\n");
    scanf("%d",&num);

    printf("Sum of Digits : %d\n",sumOfDigits(num));
    return 0;
}

int sumOfDigits(int n)
{
    if( n == 0 )
    {
        return 0;
    }

    return (n % 10) + sumOfDigits(n / 10);
}