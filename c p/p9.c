#include <stdio.h>
#include <math.h>

int main()
{
    
    int i, T, N;
    double root, difference;
    scanf("%d", &T);
    
    for(i = 1; i <= T; i++)
    {
        scanf("%d", &N);
        root = sqrt(N);
        difference = ceil(root) - floor(root);
        if(difference <= 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}