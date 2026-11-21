#include<stdio.h>

/* FUNCTION TO SORT ARRAY IN ASCENDING ORDER */
void sortArray(int arr[] , int n )
{
    int i,j,temp;

    for( i = 1; i <= n-1; i++ )
    {
        for( j = 1; j <= n-i; j++ )
        {
            if( arr[j] > arr[j+1] )
            {
                // SWAP ELEMENTS
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n,i,arr[1000];

    printf("Enter number of elements:\n");
    scanf("%d",&n);

    printf("Enter %d numbers:\n",n);
    for( i = 1; i <= n; i++ )
    {
        scanf("%d",&arr[i]);
    }

    sortArray( arr , n ); // PASSING ARRAY TO FUNCTION 

    printf("Sorted Array in ascending order:\n");
    for( i = 1; i <= n; i++ )
    {
        printf("%d\t",arr[i]);
    }

    printf("\n");

    return 0;
}