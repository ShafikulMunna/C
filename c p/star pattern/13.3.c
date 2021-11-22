*******
 ******
  *****
   ****
    ***
     **
      *
     **
    ***
   ****
  *****
 ******
*******

#include <stdio.h>

int main()
{
    
    int i, j, k, l, m, n, d;
    
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for(m = i; m <= n; m++)
        {
            printf("c");
        }
        printf("\n");
    }
    
    for(k = 2; k <= n; k++)
    {
        for(l = k; l <= n; l++)
        {
            printf(" ");
        }
        for(d = 1; d <= k; d++)
        {
            printf("c");
        }
        
        printf("\n");
    }

    return 0;
}