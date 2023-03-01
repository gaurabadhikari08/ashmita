#include <stdio.h>

int main()
{
    int i, sum;
    for (i = 1; i < 50; i++)
    {
        sum = sum + i;
    }
    printf("The sum of first 50 natural numbers is %d\n", sum);

    return 0;
}