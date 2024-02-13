//Check pattern a*b+
#include<stdio.h>
#include<string.h>

int main()
{
    char st[100];
    scanf("%[^\n]s",&st);
    int c=0;
    for(int i=0; i<=strlen(st); i++)
    {
        if(st[i]=='b')
        {
            c++;
        }
    }
    if(c>=1)
    {
        printf("Matched");
    }
    else
    {
        printf("Not matched");
    }
}
