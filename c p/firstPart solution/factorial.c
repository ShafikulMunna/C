#include <stdio.h>
#include <string.h>


int main()
{
    
    int n, i;
    long long int result = 1;
    
    scanf("%d", &n);
    
    if(n < 1)
    {
        result = 1;
    }
    
    for(i = 1; i <= n; i++)
    {
        result = result * i;
    }
    
    printf("The factorial of %d is: %lld\n", n, result);

    return 0;
}