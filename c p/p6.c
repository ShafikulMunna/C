#include <stdio.h>

int main()
{
    int T, N, m, l, i, h, sum;
    scanf("%d", &T);
    
    for(i = 1; i <= T; i++)
    {
        scanf("%d", &N);
        m = N % 10;
        
        while(N != 0)
        {
            h = N % 10;
            N = N / 10;
            
            if(h == 1)
            {
                l = h;
            }
        }
        sum = m + l;
        
        printf("sum = %d\n", sum);
    }

    return 0;
}