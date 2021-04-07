// Mohammad Rahatul Islam___ IICU 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define maxi  20000000 //     
int prime[maxi],p;
int chek[maxi];
int rafi[maxi];
void seive()
{
    chek[0]=1;
    chek[1]=1;
    for(int i=2;i<=maxi;i++){
        if(chek[i]!=1){
            for(int j=i+i;j<=maxi;j+=i){
                chek[j]=1;
            }
        }
    }
   


    int f=1;
    for(int i=3;i<=maxi;i++){
        if(chek[i]==0 && chek[i+2]==0){
            rafi[f++]=i;

        }
    }

    
}

int main()
{



    seive();
    int n;

    while(scanf("%d",&n)==1)
    {


        printf("(%d, %d)\n",rafi[n],rafi[n]+2);



    }







    return 0;
}
