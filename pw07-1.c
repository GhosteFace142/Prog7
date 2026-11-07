//Вариант №23
#include <stdio.h>

int main()
{
    char a;
    while((a = getchar()) != EOF)
    {
        if(a == 'e')
            printf("i");
        else
            putchar(a);
    }
    return 0;
}
