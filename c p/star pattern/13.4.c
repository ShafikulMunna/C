#include <stdio.h>

int main()
{
    
    int i, j, k, l, m, d, h, n;
    
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("c");
        }
        for(l = i; l < n; l++)
        {
            printf(" ");
        }
        for(d = i; d < n; d++)
        {
            printf(" ");
        }
        for(h = 1; h <= i; h++)
        {
            printf("c");
        }
        
        printf("\n");
    }
    

    return 0;
}