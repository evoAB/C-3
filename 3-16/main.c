#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter any char : ");
    scanf("%c",&c);
    if(c>='A' && c<='Z')
        printf("UPPERCASE");
    else
        if(c>='a' && c<='z')
            printf("LOWERCASE");
        else
            printf("SPECIAL CHARACTER");

    return 0;
}
