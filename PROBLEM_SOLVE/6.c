/*#include<stdio.h>
int plus(int array[100],int N)
{
    if(N<=0) return 0;
    else return (plus(array,N-1)+array[N-1]);

}
int main()
{
    int array[100],N,i,sum;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&array[i]);
    }
    sum=plus(array,N);

    printf("%d",sum);
    return 0;
}*/
#include <stdio.h>
int log2N( int N)
{
    return (N>1)?1+log2N(N/2):0;
}
int main()
{
    int N,log;
    scanf("%d",&N);
    log=log2N(N);
    printf("%d",log);
    return 0;
}
