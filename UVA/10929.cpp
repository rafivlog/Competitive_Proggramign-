/// Bismillahir Rahmaneer Raheem...
#include<bits/stdc++.h>
using namespace std;
#define maxi 1000
int main()
{
    char str[maxi];
    while(scanf("%s",&str)&&str)
    {
        int len;
        len = strlen(str);

        if(str[0]=='0' && len ==1)
        {
            break;
        }
        int n=0,digit=0;
        for(int i=0; i<len; i++)
        {
            digit = n * 10 + str[i]-48;
            n = digit%11;
        }
        if(n==0)
        {
           printf("%s is a multiple of 11.\n",str);
        }
        else
        {
             printf("%s is not a multiple of 11.\n",str);
        }
    }
    return 0;
}
