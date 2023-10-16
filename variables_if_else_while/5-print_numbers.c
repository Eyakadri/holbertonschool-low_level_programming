#include <stdio.h>
/**
 *main - main function
 *
 *Return: 0
 */
int main(void)
{
    int x = 0;

    while (x < 10)
    {
    printf("%d", x);
    if (x < 9)
    {
    printf(", ");
    }
    x++;
    }
    printf("\n");

    return (0);
}
