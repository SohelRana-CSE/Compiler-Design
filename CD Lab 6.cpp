#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    printf("Enter an identifier: ");
    scanf("%[^+]s",&ch);
    int c=0;
    if(ch[0]>='a' && ch[0]<='z' || ch[0]>='A' && ch[0]<='Z' || ch[0]=='_')
    {
        c=1;
        for(int i=1; i<strlen(ch); i++)
        {
            if((ch[i]>='a' && ch[i]<='z') || (ch[i]>='A' && ch[i]<='Z') || (ch[i]>=0 && ch[i]<=9) || ch[i]=='_')
            {
                c=1;
                continue;
            }
            else
            {
                c=0;
                break;
            }


        }
    }
    if(c==1)
    {
        printf("Valid");
    }
    if(c==0)
    {
        printf("Not Valid");
    }

}
