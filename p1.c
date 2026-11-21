#include<stdio.h>

// FUNCTION DECLARATION
int power(int x, int y);

int main()
{
    int base,exp;
    printf("Enter Base and Exponent:\n");
    scanf("%d %d",&base,&exp);

    printf("Result = %d\n",power(base,exp));
    return 0;
}

int power(int x, int y)
{
    if( y == 0 )
    {
        return 1;
    }
    return x * power(x , y - 1);
}