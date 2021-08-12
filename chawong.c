#include<stdio.h>

int main()
{
        int min = 1000;
        int max = -1000;
        for (int i = 0;i < 3 ; i++)
        {
        
            int num;
            scanf("%d",&num);
            if(num<min)
                min=num;
            if(num>max)
                max=num;
        }
        int sum;
        sum = min + max;
        printf("%d",sum);
        
        
}
