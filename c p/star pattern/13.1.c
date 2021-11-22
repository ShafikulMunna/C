

							****
							***
							**
							*
							**
							***
							****



#include <stdio.h>

int main()
{
    
    int i, n, j, k, l;
    
    for(i = 1; i <= 7; i++)
    {
        for(j = i; j <= 7; j++)
        {
            printf("c");
        }
        printf("\n");
    }
    
    for(k = 2; k <= 7; k++)
    {
        for(l = 1; l <= k; l++)				
        {
            printf("c");
        }
        
        printf("\n");
    }
    

    return 0;
}