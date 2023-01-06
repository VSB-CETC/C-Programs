#include <stdio.h>
void main()
{
    float n,cost;
    printf("Enter the # units used:");
    scanf("%f",&n); 
    if (n<=200)
    {
        cost=0.5*n;
        printf("Your Total EBill is:Rs.%.1f",cost);
    }
    else if (n>200&&n<=400)
    {
        cost=(0.65*n)+100;
        printf("Your Total EBill is:Rs. %.1f",cost);
    }
    else if (n>400&&n<=600)
    {
        cost=(0.80*n)+200;
        printf("Your Total EBill is: Rs.%.1f",cost);
    }
    else
    {
        cost=(1.25*n)+425;
        printf("Your Total EBill is: RS. %.1f",cost);
    }
}