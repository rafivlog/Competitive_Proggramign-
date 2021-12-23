//Bishmillahir Rahmanir Raheem
//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
//#include<pair>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define pll pair<ll,ll>
#define vp vector<pair<ll,ll>>
#define pb push_back
#define ff first
#define ss second
#define pi acos(-1.0)
#define tan(a) atan(a)/(pi/180)
#define sin(a) asin(a)/(pi/180)
#define cos(a) cos(a)/(pi/180)
#define test ll tc;cin>>tc; while(tc--){solve();}
#define max   99999999
#define inf   1<<30
#define eps   1e-9
#define mod   1000000007
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define case(tc) cout << "Case " << tc <<": "
#define all(qz) qz.begin(),qz.end()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

void iofun() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

ll Pow(ll c, ll d) {return d == 0 ? 1 : c * Pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
	return p1.second < p2.second;
}

void activity_selection(int n, vector<pair<int, int>> time)
{
	sort(time.begin(), time.end(), comp);
	cout << "Following Activities are selected : \n";
	cout << "( " << time[0].first << " , " << time[0].second << " )\n";
	for (int i = 0, j = 1; j < n; j++)
	{
		if (time[j].first > time[i].second) {
			cout << "( " << time[j].first << " , " << time[j].second << " )\n";
			i = j;
		}
	}
}

void solve()
{
	int n, st, ft;
	cin >> n;
	vector<pair<int, int>> time;
	for (int i = 0; i < n; ++i)
	{
		//cout << "Enter Start time & Finish time : ";
		cin >> st >> ft;
		time.push_back({st, ft});
	}
	activity_selection(n, time);
}


int main()
{
	faster;
	iofun();
	solve();
	return 0;
}