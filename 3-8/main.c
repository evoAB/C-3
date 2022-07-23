#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    if(n%4==0)
        printf("It is a leap year");
    else
        printf("It is not a leap year");
    return 0;
}
