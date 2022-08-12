#include<stdio.h>
#include<string.h>
int main()
{
    char str[100][100];
    int n,m,i,j,flag=0;//false;
    scanf("%d%d\n",&n,&m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%s",&str[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(str[i][j]=='C'||str[i][j]=='M'||str[i][j]=='Y')
                flag=1;///true;
        }
    }
    if(flag==0)//false)
        printf("#Black&White");
    else
        printf("#Color");
    return 0;
}
