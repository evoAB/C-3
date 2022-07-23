#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e;
    printf("Enter marks of Subject1 Subject2 Subject3 Subject4 Subject5 : ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    if(a>32 && b>32 && c>32 && d>32 && e>32)
        printf("Candidate passed");
    else
        printf("Candidate failed");

    return 0;
}
