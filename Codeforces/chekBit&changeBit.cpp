#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 181;// 10110101
    int k = 6;// chek position bit
    int r ;
    r = 1<<k;//  r = 2^k
    int result = n&r;
    cout<<(result==r?"1":"0")<<endl;
}
/// change bit 0 to 1 && 1 to 0
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 6;
    int k = 2;/// position 
    int r ;
    r = 1<<k;//// 2^k
    int result = n^r;
    cout<<result<<endl;
}

