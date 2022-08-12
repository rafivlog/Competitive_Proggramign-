#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int n,i,len1;
    scanf("%d",&n);
    gets(a);
    len1=strlen(a);
    if(len1<26)
        printf("no");
    else
        printf("No");



    return 0;
}
