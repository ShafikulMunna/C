#include <stdio.h>

int find_digit(char ch)
{
    if(ch >= 48 && ch <= 57)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    
    char ch;
    int k;
    
    scanf("%c", &ch);
    k = find_digit(ch);
    
    if(k == 1)
    {
        printf("%c is a digit\n", ch);
    }
    else
    {
        printf("%c is not a digit\n", ch);
    }

    return 0;
}