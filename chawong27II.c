#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int box=2*n-1;
    for(int i=0;i<box;i++)
    {
        for(int j=0;j<box;j++)
        {
            if ((i == j) || (i < j && j < n * 2 - 1 - i) || (i > j && j > n * 2 - 3 - i))
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
