#include<stdio.h>

/* FUNCTION TO APPEND LAST THREE CHARACTER OF str2 TO str1 */
void appendLastThree( char str1[] , char str2[] )
{
    int i,len1 = 0,len2 = 0;

    /* FIND LENGTH OF FIRST STRING */
    while( str1[len1] != '\0' )
    {
        len1++;
    }

    /* FIND LENGTH OF SECOND STRING */
    while( str2[len2] != '\0' )
    {
        len2++;
    }

    /* START COPYING FROM INDEX (len2 - 3) IF LENGTH IS ATLEAST 3 */
    int start = (len2 >= 3) ? (len2 -3) : 0;

    for( i = start; i < len2; i++ )
    {
        str1[len1] = str2[i];
        len1++;
    }

    str1[len1] = '\0'; // END THE COMBINED STRING WITH NULL CHARACTER 
}

int main()
{
    char str1[100] , str2[100];

    printf("Enter first string:\n");
    scanf("%s",str1);

    printf("Enter second string:\n");
    scanf("%s",str2);

    appendLastThree(str1 , str2); // PASSING STRINGS TO FUNCTION 

    printf("Resulting first string: %s\n",str1);
    
    return 0;
}