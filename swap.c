#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the values for a and b: \n");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swap a=%d b=%d",a,b);
    return 0;
}