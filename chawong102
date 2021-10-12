#include <stdio.h>
#include <ctype.h>
//Eng -> Morsecode
char Ato9[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
char *morsecode[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----"};

void translate(char c)
{
    for (int i = 0; i < 26 + 10; i++)
        if (Ato9[i] == c)
            printf("%s ", morsecode[i]);
}

int main()
{
    char txt[100];
    printf("Input : ");
    scanf("%[^\n]", txt);
    for (int i = 0; txt[i] != '\0'; i++)
    {
        txt[i] = toupper(txt[i]);
        if ((txt[i] >= 'A' && txt[i] <= 'Z') || (txt[i] >= '0' && txt[i] <= '9'))
            translate(txt[i]);
        else
            printf("? ");
    }
    return 0;
}
