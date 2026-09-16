#include <stdio.h>

int main()
{
    int num, binary = 0, place = 1, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        remainder = num % 2;
        binary = binary + (remainder * place);

        num = num / 2;
        place = place * 10;
    }

    printf("%d\n", binary);

    return 0;
}