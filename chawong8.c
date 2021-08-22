#include <stdio.h>

int main ()
{
    int min = 10000000;
    for ( int i = 0;i < 3;i++)
    {
        int num;
        scanf("%d",&num);
        if (num < min)
            min = num ;
    }
    printf("%d",min);

    return 0;
}
