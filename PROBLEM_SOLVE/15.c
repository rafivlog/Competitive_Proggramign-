#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];


    gets(a);
    gets(b);


    int len1=strlen(a);
    int len2=strlen(b);

    if(len1==len2)
        printf("-1");
    else if(len1>len2)
        printf("%d\n",len1);
    else
        printf("%d\n",len2);
    return 0;
}
