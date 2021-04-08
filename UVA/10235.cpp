#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sc1(a) scanf("%lld",&a)
bool checkPrime(ll n) {

    ll i; if(n<=1)return false;

    for(i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}

ll reverse(ll num)
{
    ll revnum = 0;
    while (num != 0){
        revnum = revnum * 10 + num % 10;
        num /= 10;
    }
    return revnum;
}

int main()
{
    ll num, m, tc, t = 1;

    while (sc1(num) == 1) {
        ll reversenum = reverse(num);
        if(checkPrime(num) == false)
            cout << num << " is not prime." << endl;
        else if(checkPrime(reversenum) && num != reversenum)
            cout << num << " is emirp." << endl;
        else
            cout << num << " is prime." << endl;
    }
    return 0;
}
