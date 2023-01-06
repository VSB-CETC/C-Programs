#include <stdio.h>
main()
{
    int a,b,c;
    printf("Enter the two values:");
    scanf("%d %d",&a,&b);
    c=a*b;
    if(c>1000)
        printf("%d",a+b);
    else
        printf("%d",c);
}