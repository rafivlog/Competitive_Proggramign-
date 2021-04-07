//Bismillahir Rahmanir Rahim...
// Mohammad Rahatul Islam CSE-49 IIUC
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define maxi  1000000+5
int prime[maxi+5],p;
int chek[maxi+5];
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
    for(int i=0;i<=maxi;i++){
        if(chek[i]==0){
            prime[p++]=i;
        }
    }



}

int main()
{



    seive();
    int n;

    while(scanf("%d",&n)==1)
    {


        if(n==0){break;}
        int c=0;
        for(int i=0;i<p;i++){
            if(n%prime[i]==0)
                c++;
        }
        cout<<n<<" : "<<c<<endl;




    }







    return 0;
}
