#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int boxsize = n*2-1;
    for(int i=1;i<=boxsize;i++)
    {
        for(int j=1;j<=boxsize;j++)
        {
            if((j<=i && j<=n*2-i)||(j>=i && j>=n*2-i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
