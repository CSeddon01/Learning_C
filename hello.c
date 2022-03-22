#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Hello, world!\n");
}

// basic calculator

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("%i\n", x + y);
}
//Updated calculator
int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    int z = x + y;
    printf("%i\n", z);
}

