#include <stdio.h>

int main()
{
    int i, j, space;

    for(i = 7; i >= 1; i = i - 2)
    {
        for(space = 7; space > i; space = space - 2)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("* ");

        printf("\n");
    }

    for(i = 3; i <= 7; i = i + 2)
    {
        for(space = 7; space > i; space = space - 2)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("* ");

        printf("\n");
    }

    return 0;
}