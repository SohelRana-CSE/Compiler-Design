#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    scanf("%[^*]s",&str);
    char lexeme[100];
    int index=0;
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]==' ')
        {
            printf("%s\n",lexeme);
            lexeme[0]='\0';
            index=0;
        }
        else
        {
            lexeme[index]=str[i];
            index++;
            lexeme[index]='\0';
        }
    }
}
