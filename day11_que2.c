#include <stdio.h>

int main()
{
    float costPrice, sellingPrice, profit, loss, percentage;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice)
    {
        profit = sellingPrice - costPrice;
        percentage = (profit * 100) / costPrice;

        printf("Profit %.2f%%\n", percentage);
    }
    else if (sellingPrice < costPrice)
    {
        loss = costPrice - sellingPrice;
        percentage = (loss * 100) / costPrice;

        printf("Loss %.2f%%\n", percentage);
    }
    else
    {
        printf("No Profit No Loss\n");
    }

    return 0;
}