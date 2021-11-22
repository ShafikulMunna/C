#include <stdio.h>
#include <string.h>

int main()
{
    
    int T, i, count, n;
    char string[10000], letter[2];
    scanf("%d", &T);
    
    
    for(i = 1; i <= T; i++)
    {
        scanf(" %[^\n]", string);
        scanf("%s", letter);
        count = 0;
        
        for(n = 0; n < strlen(string); n++)
        {
            if(letter[0] == string[n])
            {
                count++;
            }
        }
        
        if(count != 0)
        {
            printf("Occurrence of '%c' in '%s' = %d\n", letter[0], string, count);
        }
        else
        {
            printf("'%c' is not present\n", letter[0]);
        }
        
    }
    

    return 0;
}