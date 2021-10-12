#include <stdio.h>
#include <string.h>
//Morsecode -> Eng
char Ato9[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
char *morsecode[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----"};

void translate(char mc[])
{
    for (int i = 0; i < 26 + 10; i++)
        if (strcmp(mc, morsecode[i]) == 0)
            printf("%c", Ato9[i]);
}

int main()
{
    char txt[100];
    printf("Input Morse : ");
    scanf("%[^\n]", txt);
    int t = 0;
    char tmp[100];
    for (int i = 0; txt[i] != '\0'; i++)
    {
        if (txt[i] != ' ')
            tmp[t++] = txt[i];
        if (txt[i] == ' ' || txt[i + 1] == '\0')
        {
            tmp[t] = '\0';
            t = 0;
            translate(tmp);
        }
    }
    return 0;
}
