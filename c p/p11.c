#include <stdio.h>

int main()
{
    
    int T, N, i, l;
    long long int factorial = 1;
    scanf("%d", &T);
    
    for(i = 1; i <= T; i++)
    {
        scanf("%d", &N);
        
        for(l = 2; l <= N; l++)
        {
            factorial = factorial * l;
        }
        
        printf("%lld\n", factorial);
    }

    return 0;
}