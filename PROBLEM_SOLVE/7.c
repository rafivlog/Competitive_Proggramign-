#include<stdio.h>
int main()
{
    int a[1000],s,i,e,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(s=0; s<n; s++)
    {
        for(e=s; e<n; e++)
        {
            for(i=s; i<=e; i++)
            {
                printf("%d",a[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
