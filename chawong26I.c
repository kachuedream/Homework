#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<((i+1)*2)/2;j++)
        printf("*");

        for(int j=0;j<(2*n-3)-(i*2);j++)
        printf(" ");

        for(int j=0;j<((i+1)*2)/2;j++)
        printf("*");
        printf("\n");
    }
    for(int i=0;i<n*2-1;i++)
    printf("*");
    printf("\n");

    for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<((i+1)*2)/2;j++)
        printf("*");

        for(int j=0;j<(2*n-3)-(i*2);j++)
        printf(" ");

        for(int j=0;j<((i+1)*2)/2;j++)
        printf("*");
        printf("\n");
    
    }
    return 0;
}
