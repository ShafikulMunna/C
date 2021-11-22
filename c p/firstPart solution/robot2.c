#include <stdio.h>
#include <math.h>

int main()
{
    
    int i, n, j, x, y;
    
    int grid[10][10];
    
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            grid[i][j] = 1;
        }
    }
    
    printf("Please enter the number of blocked cells: ");
    scanf("%d", &n);
    printf("Now enter the cells: ");
    
    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        grid[x][y] = 0;
    }
    
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            if(grid[i][j] == 1)
            {
                printf("Enter the cells: %d %d\n", i, j);
            }
            else{
                printf("blocked\n");
            }
        }
    }
    

    return 0;
}