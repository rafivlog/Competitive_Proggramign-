#include<stdio.h>
int main()
{
    int A[10000000],i,k,j,N,c=0,f=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        scanf("%d",&A[i]);
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(A[j]%2==0)
                A[j]=A[j]/2;///5 6 8 10
            else
               f=1;

        }

        if(f==0)
            c++;
        else
            break;

    }
    printf("%d\n",c);
    return 0;
}
