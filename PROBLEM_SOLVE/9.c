#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    str_ing[6]={"1/6","1/3","1/2","2/3","5/6","1/1"};
    int a,b;
    scanf("%d%d",&a,&b);
    a=max(a,b);
    printf("%d",str_ing[6-a]);
    return 0;

   //6-4=2=1/2
}
