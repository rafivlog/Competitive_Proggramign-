// Bismillahir Rahmanir Raheem...
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define maxi  46342+5
int prime[maxi+5],p;
int chek[maxi+5];
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
    for(int i=0; i<=maxi; i++){
        if(chek[i]==0){
            prime[p++]=i;
        }
    }
}
int main()
{
    seive();
    int n;
    while(cin>>n){
        if(n==0){
            break;
        }
        cout << n << " = ";
        if(n<0){
            cout << "-1 x ";
            n = -n;
        }
        bool flag = true;
        for(int i=0 ; i<p; i++){
            if(n%prime[i]==0){
                while(n%prime[i]==0){
                    cout<<prime[i];
                    n/=prime[i];
                    if(n>1)
                        cout<<" x ";
                }
            }
        }
        if(n>1)
            cout<<n;
        cout<<endl;
    }
    return 0;
}
