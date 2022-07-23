#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cp, sp;
    printf("Enter cost price and selling price : ");
    scanf("%d%d",&cp,&sp);
    if(sp>cp)
        printf("Profit = %d %%",(sp-cp)*100/cp);
    else
        printf("Loss = %d %%",(cp-sp)*100/cp);

    return 0;
}
