#include <stdio.h>
void main()
{
    for (int i = 0; i <= 5; i++)
    {
        if (i == 2)
        {
            continue;
        }
        else
        {
            printf("%d\n", i);
        }
    }
}
// continue statement direct goto loop without executing what is written after continue keyword;