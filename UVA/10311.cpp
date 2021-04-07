#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define size1 100000005
bool check[size1];
void seive(){
    memset(check, true, sizeof(check));
    for(ll i = 4; i < size1; i += 2)
        check[i] = false;
    check[0] = check[1] = false;
    for(ll i = 3; i * i < size1; i+=2){
        if(check[i]){
            for(ll j = i * i; j < size1; j += (2 * i))
                check[j] = false;
        }
    }
}
int main()
{
    seive();
    ll n;
    while (cin >> n && n){
        cout << n << " ";
        if(n & 1){
            if(check[n - 2]){
                cout << "is the sum of 2 and " << n - 2 << "." << endl;
            }else{
                cout << "is not the sum of two primes!" << endl;
            }
            continue;
        }
        bool flag = false;
             for(ll i = n / 2 - 1; i >= 0; i--){
            if(check[i] && check[n - i]){
                cout << "is the sum of " << i << " and " << n - i << "." << endl;
                flag = true;
                break;
            }
        }
        if(flag == false)
            cout << "is not the sum of two primes!" << endl;
    }

    return 0;
}
