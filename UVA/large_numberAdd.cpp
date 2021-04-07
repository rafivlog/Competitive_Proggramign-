/*
    BISMILLAHIR RAHMANIR RAHEEM
    MOHAMMAD RAHATUL ISLAM
    INTERNATIONAL ISLAMIC UNIVERSITY CHITTAGONG - BANGLADESH
    CSE-49
*/


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <string>
#include <sstream>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <memory.h>
#include <functional>
#include <numeric>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define PI 2*acos(0.0)
#define MAX3(a,b,c) max(a,max(b,c))
#define MIN3(a,b,c) min(a,min(b,c))
#define MAX   10000007
#define INF   1<<30
#define EPS   1e-9
#define MOD   1000000007
#define ull unsigned long long int
#define ll long long
string yooo(string str,string STR)
{
    string ans="";
    int k,l,m,n,carry=0,sum,diff;
    if(str.size() > STR.size())
        swap(str, STR);
    k=str.size();
    l=STR.size();
    diff=l-k;
    for(int i=k-1; i>=0; i--)
    {
        sum=((str[i]-'0')+(STR[i+diff]-'0')+carry);
        ans.push_back(sum%10+'0');
        carry=sum/10;
    }
    for(int i=l-k-1; i>=0; i--)
    {
        sum=((STR[i]-'0')+carry);
        ans.push_back(sum%10+'0');
        carry=sum/10;
    }
    if(carry)
    {
        ans.push_back(carry+'0');
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    string str,STR="9999";
    cin>>str;
    cout<<yooo(str,STR);
    return 0;

}

/*#include<bits/stdc++.h>
using namespace std;
string findSum(string str1, string str2)
{
    if (str1.length() > str2.length())
        swap(str1, str2);
    string str = "";
    int n1 = str1.length(), n2 = str2.length();
    int diff = n2 - n1;
    int carry = 0;
    for (int i=n1-1; i>=0; i--)
    {
        int sum = ((str1[i]-'0') +
                   (str2[i+diff]-'0') +
                   carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    for (int i=n2-n1-1; i>=0; i--)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    if (carry)
        str.push_back(carry+'0');
    reverse(str.begin(), str.end());
    return str;
}
int main()
{
    string str1;
    string str2="9999";
    cin>>str1;
    cout << findSum(str1, str2);
    return 0;
}
*/
