#include <stdio.h>

int main ()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<2*n-1;i++)
    printf("*");
    printf("\n");
    for(int i=0;i<n-2;i++)
    {
        for(int j=0;j<i+1;j++)
            printf(" ");
            printf("*");
        for(int j=0;j<(2*n-1)-(2*(i+1)+2);j++)
            printf(" ");
            printf("*");
            printf("\n");
    }
    for(int i=0;i<n-1;i++)
        printf(" ");
        printf("*");
        printf("\n");
    for(int i=n-3;i>=0;i--)
    {
        for(int j=0;j<i+1;j++)
            printf(" ");
            printf("*");
        for(int j=0;j<(2*n-1)-(2*(i+1)+2);j++)
            printf(" ");
            printf("*");
            printf("\n");
    }
    for(int i=0;i<2*n-1;i++)
    printf("*");
    printf("\n");

    return 0;
}
