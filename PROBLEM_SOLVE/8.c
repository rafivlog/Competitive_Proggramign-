#include<stdio.h>
int main()
{
    int array[100000],i,j,n,sum=1;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0; i<n-1; i++)
    {

        if(array[i]!=array[i+1])
        {
            sum++;
        }

    }
    printf("%d",sum);

    return 0;
}
