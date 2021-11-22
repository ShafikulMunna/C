#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char ch;
    int n, i, j, sum = 0;
    printf("Enter the number you want to convert to decimal: ");
    
    scanf("%d", &n);
    
    for(i = 6; i >= 0; i--)
    {
        j = pow(2,i);
        
        sum = sum + j;
        
        printf("%d\n", sum);
        
        if(sum <= 95)
        {
            ch = '1';
        }
        else
        {
            ch = '0';
            sum = sum - j;
        }
        
        printf("%c", ch);
        
    }
    
    printf("\n");

    return 0;
}