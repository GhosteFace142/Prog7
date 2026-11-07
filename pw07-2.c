//Вариант №12
#include <stdio.h>
#include <ctype.h>

int main()
{
    int a, b, c;
    long total = 0, k = 0;

    while((a = getchar()) != EOF)
    {
        total++;
        c = (a >= 2);
        for(b = 2; b * b <= a; b++)
            if(a % b == 0)
            {
                c = 0;
                break;
            }
        if(c)
            k++;
    }
    printf("Количество символов: %ld\n", k);
    return 0;
}
