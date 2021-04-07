#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define maxi 1000000
int prime[maxi],p;
int chek[maxi];
void seive()
{
    chek[0]=1;
    chek[1]=1;
    for(int i=2; i<=maxi; i++)
    {
        if(chek[i]!=1)
        {
            for(int j=i+i; j<=maxi; j+=i)
            {
                chek[j]=1;
            }
        }
    }
    for(int i=0; i<=maxi; i++)
    {
        if(chek[i]==0)
        {
            prime[p++]=i;
        }
    }


}
int main()
{




    seive();


    while(1)
    {
        int n;
        cin>>n;
        if(n==0)
        {
            break;
        }
        for(int i=3;i<n; i++)
        {
            if(chek[i]==0)
            {
                int j;
                j = n-i;
                if(chek[j]==0)
                {
                    printf("%d = %d + %d\n", n, i, j);
                    break;
                }
            }
        }
    }


    
    
    
    
    
    
    
    
    
    
    
    

    return 0;
}
