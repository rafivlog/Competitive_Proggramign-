/*#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int n,i,c=0;
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%c",&s[i]);
    }
    s[i]=0;

    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]==s[i+1])
        {
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int n,i,c=0;
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%c",&s[i]);
    }
    s[i]='\0';

    for(i=0; i<n; i++)
    {
        if(s[i]==s[i+1])
        {
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
/*#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int n,i,c=0;
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%c",&s[i]);
    }
    s[i]='0';
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]==s[i+1])
        {
            c++;
        }
    }

    printf("%d\n",c);
    return 0;
}*/
