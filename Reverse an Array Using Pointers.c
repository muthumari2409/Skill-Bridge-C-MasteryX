#include <stdio.h>

int main()
{
    int a[5], i, temp;
    int *start, *end;

    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    start = a;
    end = a + 4;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed array: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}