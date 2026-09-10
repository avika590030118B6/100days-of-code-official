#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time;
    float simpleInterest, compoundInterest, amount;

    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    simpleInterest = (principal * rate * time) / 100;

    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", simpleInterest, compoundInterest);

    return 0;
}