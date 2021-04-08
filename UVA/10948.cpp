/// Bismillahir Rahmaneer Raheem...
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
    for(int i=2; i<=maxi; i++){
        if(chek[i]!=1){
            for(int j=i+i; j<=maxi; j+=i){
                chek[j]=1;
            }
        }
    }
}
int main()
{
    seive();
    int n;
    while(cin>>n && n>0){
        int rafi;
        if ( n % 2 == 0 )
            rafi = n - 1;
        else
            rafi = n - 2;
        if ( chek[n - 2]==0 ){
            printf ("%d:\n%d+%d\n", n, 2, n - 2);
            continue;
        }
        bool flag = true;
        while ( n - rafi <= rafi ){
            if ( chek [rafi]==0 && chek [n - rafi]==0){
                printf ("%d:\n%d+%d\n", n, n - rafi, rafi);
                flag = false;
                break;
            }
            rafi -= 2;
        }if ( flag )
            printf ("%d:\nNO WAY!\n", n);
    }
    return 0;

}
