#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int i, T, count = 0;
    char line[1000000];
    char *p, *e;
    long input;
    
    scanf("%d", &T);
    
    
    for(i = 1; i <= T; i++)
    {
        scanf(" %[^\n]", line);
        p = line;
        
        for(p = line; ; p = e)
        {
            input = strtol(p, &e, 10);
            if(p == e)
            {
                break;
            }
            
            count++;
        }
        
        printf("%d\n", count);
    }

    return 0;
}