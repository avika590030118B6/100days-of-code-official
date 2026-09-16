#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= (2 * n - 1); i = i + 2)
    {
        sum = sum + i;
    }

    printf("%d\n", sum);

    return 0;
}