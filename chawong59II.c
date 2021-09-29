#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000000];
    scanf("%[^\n]s",str);
    printf("Input : %s\n",str);
    printf("Output : ");
    int n = strlen(str);
    for (int i = n - 1; i >= 0; i--)
        printf("%c", str[i]);
    return 0;
}
