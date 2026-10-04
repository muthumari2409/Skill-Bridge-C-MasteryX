#include <stdio.h>

int main()
{
    int a[5], i;
    int *p;
    int max, min;

    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    p = a;
    max = *p;
    min = *p;

    for(i = 1; i < 5; i++)
    {
        p++;

        if(*p > max)
            max = *p;

        if(*p < min)
            min = *p;
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}