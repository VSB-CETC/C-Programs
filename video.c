#include <stdio.h>
void main()
{
    int r;
    printf("************************ \n");
    printf("Enter the video rating:");
    scanf("%d",&r);
    printf("************************ \n");
    if(r>=30&&r<=50)
        printf("Average");
    else if (r>=51&&r<=60)
        printf("Good");
    else if (r>=61&&r<=80)
        printf("Excellent");       
    else if (r>80&&r<=100)
        printf("Outstanding");
    else
        printf("Enter correctly");
}