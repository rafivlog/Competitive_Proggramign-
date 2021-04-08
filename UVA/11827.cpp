/// Bismillahir Rahmaneer Raheem...
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        string str;
        int c=0,arr[1005];
        getline(cin,str);
        stringstream STR(str);
        while(STR>>arr[c])
            c++;
        int maxi=0;
        for(int i=0; i<c; i++)
        {
            for(int j=i+1; j<c; j++)
            {
                maxi = max(maxi,__gcd(arr[i],arr[j]));
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}

/////GCD can be extracted in this way if you want
/*int ____gcd(int a, int b)
{
    if (a == 0 || b == 0)
        return 0;
    else if (a == b)
        return a;
    else if (a > b)
        return ____gcd(a-b, b);
    else
        return ____gcd(a, b-a);
}*/
