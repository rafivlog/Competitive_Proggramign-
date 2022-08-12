#include<stdio.h>
#include<string.h>
int main()
{
    char S[100];
    int i,j,k=0,l=0,n,m,A,B;
    scanf("%d%d",&A,&B);
    scanf("%s",S);
    for(i=0; S[i]!='-'; i++)
    {
        k++;
    }
    for(i=i+1; S[i]; i++)
    {
        l++;
    }
    if(k==A && l==B)
        printf("yes");
    else
         printf("No");
    return 0;


}
