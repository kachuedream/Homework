#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int box =2*n-1;
    for(int i=0;i<box;i++)
    {
        for(int j=0;j<box;j++)
        {
            if( i==0||i==j||i>j&&i==2*n-2-j||i<j&&i==2*n-2-j||i==2*n-2)
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
