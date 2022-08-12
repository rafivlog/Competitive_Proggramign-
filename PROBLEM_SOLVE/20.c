#include<stdio.h>
int main()
{
    int a[1000],b[1000],n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            printf("rated");
        }
    }

    for(i=0; i<n; i++)
    {
        if(a[i]>a[i-1])
        {
            printf("unrated");
        }
    }
    printf("maybe");
 return 0;
}
