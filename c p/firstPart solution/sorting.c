#include <stdio.h>
#include <math.h>

int main()
{
    
    int ara[] = {
        3, 1, 5, 2, 4
    };
    
    int i, j, temp;
    
    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(ara[j] < ara[i])
            {
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }
    
    for(i = 0; i < 5; i++)
    {
        printf("%d ", ara[i]);
    }
    

    return 0;
}