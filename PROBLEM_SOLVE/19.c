#include<stdio.h>
int main()
{
    int a[100],b[100],n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            printf("rated");
            return 0;
        }
    }

    for(i=0; i<n; i++)
    {
        if(a[i]>a[i-1])
        {
            printf("unrated");
            return 0;
        }
    }
    printf("may be");

    return 0;
}
