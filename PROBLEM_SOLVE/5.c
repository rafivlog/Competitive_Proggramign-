#include<stdio.h>
int arr[100000],N;
int max (int i)
{

    if(i==N)
        return -1e9;
    int a= max(i+1);
    if(a<arr[i])
        return arr[i];
    else
        return a;
}
int main()
{
    int i;
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);

    }
    int MX=max(0);
    printf("%d\n",MX);
    return 0;
}
