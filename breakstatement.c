#include <stdio.h>
void main()
{
    for (int i = 0; i <= 5; i++)
    {
        if (i == 2)
        {
            break;
        }
        else
        {
            printf("%d\n", i);
        }
    }
}
// break statement terminate the loop,after the break statement execution there is no iteration or no execution of any statement what is written in loop's block