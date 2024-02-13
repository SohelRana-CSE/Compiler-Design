#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];
    int pnt=0;

    scanf("%[^!]s",&ch);

    for(int i=0;i<strlen(ch);i++)
    {
        if((ch[i]=='/')&&(pnt==0))
        {
            pnt=1;
            continue;
        }
        else if((ch[i]=='/')&&(pnt==1))
        {
            pnt=2;
            continue;
        }
        else if((ch[i]=='*')&&(pnt==1))
        {
            pnt=3;
            continue;
        }
        if(pnt==2)
        {
           printf("Single line comment\n");
           pnt=0;
           continue;
        }
        if(pnt==3)
        {
         printf("Multiple line comment\n");
           pnt=0;
           continue;

        }

    }

}
