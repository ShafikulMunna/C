#include <stdio.h>
#include <string.h>

int main()
{
    
    int T, i, l, r;
    char n[101];
    
    scanf("%d", &T);
    
    for(i = 1; i <= T; i++)
    {
        scanf("%s", n);
        
        l = strlen(n);
        r = n[l - 1] - 48;
        
        if(r % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }

    return 0;
}