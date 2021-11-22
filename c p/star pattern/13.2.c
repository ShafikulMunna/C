******
 ****
  ***
   *
  ***
 *****
*******

#include <stdio.h>

int main()
{
    
    int i, j, k, l, m, n, h, f, d;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
           printf(" "); 
        }
        for(k = i; k <= n; k++)
        {
            printf("c");
        }
        for(l = i; l <= n - 1; l++)
        {
            printf("c");
        }
        printf("\n");
    }
    
    for(m = 2; m <= n; m++)
    {
        for(f = m; f <= n; f++)
        {
            printf(" ");
        }
        
        for(h = 1; h <= m; h++)
        {
            printf("c");
        }
        
        for(d = 2; d <= m; d++)
        {
            printf("c");
        }
        
        printf("\n");
    }
    

    return 0;
}