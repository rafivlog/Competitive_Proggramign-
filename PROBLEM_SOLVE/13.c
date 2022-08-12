#include<stdio.h>
int main()
{
    int a[100000],i,j,k,n,m,max,x;
    scanf("%d",&x);
    for(m=0; m<x; m++)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(k=1; k<=n; k++)
        {
            for(i=0; i<n-k+1; i++)
            {
                max=a[i];
                for(j=0; j<k; j++)
                {
                    if(max<a[i+j])
                    {
                        max=a[i+j];
                    }
                }
                printf("%d ",max);

            }

        }
        printf("\n");
    }
    return 0;
}
/*#include<stdio.h>
int main()
{
    int a[100],n,x,i,j,sum=0,flag=0,m=0,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        for(j=0; j<x; j++)
        {
            scanf("%d",&a[j]);
            sum=sum+a[j];
        }

        for(j=0; j<x; j++)
        {
            if(sum==a[j])
            {
                flag=1;
                break;

            }
        }
        if(flag==1){
            printf("yes\n");
            flag=0;
        }
        else
            printf("no\n");

    }



}*/
