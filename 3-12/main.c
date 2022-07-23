#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter any alphabet : ");
    scanf("%c",&n);
    if(n>='a' && n<='z')
        printf("LOWERCASE");
    else
        if(n>='A' && n<='Z')
            printf("UPPERCASE");
        else
            printf("Invalid");
    return 0;
}
