/// Bismillahir Rahmaneer Raheem...
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int gcd,lcm;
        cin>>gcd>>lcm;
        if(lcm%gcd){
            cout<<"-1"<<endl;
        }else{
            cout<<gcd<<" "<<lcm<<endl;
        }
    }
    return 0;
}
