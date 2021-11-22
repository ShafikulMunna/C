#include <stdio.h>
#include <math.h>

int main()
{
    
    int ara[] = {
        2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97
    };
    
    int n, temp, i, count, root, j;
    scanf("%d", &n);
    root = sqrt(n);
    
    for(i = 0; i <= root; i++){
        count = 0;
        
        for(j = n; j > 0; j--)
        {
            int temp = j;
            while(temp % ara[i] == 0)
            {
                count++;
                temp = temp / ara[i];
            }
        }
        
        printf("%d, %d\n", ara[i], count);
    }

    return 0;
}