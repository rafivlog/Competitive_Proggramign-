#include<bits/stdc++.h>
using namespace std;
int coin[25];
int chekbit(int n,int pos)
{
    return n&(1<<pos);
}
int getSum(int value,int p)
{
    int sum =0;
    for(int i=p-1; i>=0; i--)
    {
        if(chekbit(value,i))
            sum+=coin[i];
    }
    return sum;
}
int solve(int target, int p)
{
    int total;
    total = 1<<p;
    for(int i=0; i<total; i++)
    {
        int genarateValue = getSum(i,p);
        if(genarateValue == target)
            return 1;
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int target, p;
        cin>>target;
        cin>>p;
        for(int i=0; i<p; i++)
        {
            cin>>coin[i];
        }
        int result = solve(target,p);
        cout<<(result?"YES":"NO")<<endl;
    }
    return 0;
}
