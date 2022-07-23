#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter any 2 numbers : ");
    scanf("%d%d",&a,&b);
    if(a==b)
        printf("Both are same");
    else
        if(a>b)
            printf("First number is greater");
    else
        printf("Second number is greater");

    return 0;
}
