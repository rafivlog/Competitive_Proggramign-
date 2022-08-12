#include<stdio.h>
int main()
{
    int array[100000],i,sum=0,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0; i<n-1; i++)
    {
        if(array[0]<array[i] && array[n-1]>array[i])
            sum++;
    }
    printf("%d\n",sum);
    return 0;
}
