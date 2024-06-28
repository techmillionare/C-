#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (size_t i = 1; i < 7; i++)
    {
        for (size_t j = 1; j < i; j++)
        {
            printf("%c","* ");
        }
        printf("\n");
    }
    return 0;
}
