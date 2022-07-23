#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter month number : ");
    scanf("%d",&n);
    if(n>0 && n<13)
    {
        if(n==2)
            printf("28 days");
        else
            if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
                printf("31 days");
    }
    else
        printf("Invalid month");

    return 0;
}
