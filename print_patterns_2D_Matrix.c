// Print Diagonal elements
#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(i ==j)
                printf("%d ",arr[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

// Print PLUS "+" Pattern
#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(i == n/2 || j == n/2)
                printf("%d ",arr[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

// Print 7 Pattern
#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if((i == 0 || j == n-1) || (i == 0 || j == n -1))
                printf("%d ",arr[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

// print Box Pattern
#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if((i == 0 || i == n-1) || (j == 0 || j == n -1))
                printf("%d ",arr[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
