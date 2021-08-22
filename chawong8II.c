#include <stdio.h>

int main ()
{
    int arr[3];
    for(int i = 0;i < 3;i++)
        scanf("%d",&arr[i]);
        for(int i=0;i<3-1;i++)
        {
            for(int k = 0;k < 3-1-i ; k++)
            {
                if (arr[k] > arr[k+1])
                {
                    int temp = arr[k];
                    arr[k] = arr[k+1];
                    arr[k+1] = temp;
                }
            }
        }
        printf("%d",arr[0]);
        return 0;
}
