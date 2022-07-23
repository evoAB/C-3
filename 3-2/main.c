#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    if(n%5==0)
        printf("It is Divisible");
    else
        printf("It is not Divisible");

    return 0;
}
