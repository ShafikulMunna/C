#include <stdio.h>
#include <string.h>


int main()
{
    
    char word[80];
    int Start, End, len;
    
    scanf("%s", word);
    
    len = strlen(word);
    
    for(Start = 0, End = len - 1; Start <= End; Start++, End--)
    {
        if(word[Start] != word[End])
        {
            break;
        }
        
    }
    
    if(Start > End)
    {
        printf("%s is palindrome.\n", word);
    }
    else
    {
        printf("%s is not a palindrome.\n", word);
    }

    return 0;
}