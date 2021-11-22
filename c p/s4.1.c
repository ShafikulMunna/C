#include <stdio.h>

int sum_of_intiger(int n)
{
    if(n == 1)
    {
        return 1;
    }
    
    return n + sum_of_intiger(n - 1);
}

int main()
{
    
    int n;
    
    scanf("%d", &n);
    
    printf("sum of n intiger: %d\n", sum_of_intiger(n));
    

    return 0;
}