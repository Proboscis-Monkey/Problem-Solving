


/*`````````````````````````````````````````````.
.											   .
.	My Lord, increase me in knowledge          .
.                                              .
...............................................*/


/*

Problem Link: https://codeforces.com/problemset/problem/1760/F
Rating: 1500

*/
#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops") 
#define int long long
#define memset(a,x) memset(a,x,sizeof(a))
#define PI 3.1415926535897932384626433832795l 
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
const int mod = 1e9 + 7;
#define vi vector<int>
#define vtd vector<vector<int>>
#define vp vector<pair<int, int>>
#define pqu priority_queue<int>
#define all(x) x.begin(), x.end()
#define setbit(n) __builtin_popcount(n);
bool cmp(pair<int, int> &x, pair<int, int> &y)
{
	if (x.second != y.second) {
		return x.second < y.second;
	}
 
	return x.first < y.first;
}
 
void input(vector<int>&v) {
	for(auto &i:v) cin>>i;
}

void print(vector<int>&v, int n) {
	for(int i = 0; i<n; i++) {
		cerr<<v[i]<<" ";
	}
	cerr<<'\n';
}

void PreSum(vector<int>&prefixSum, vector<int>&v, int n) {
	prefixSum[0] = 0;
	for(int i = 1; i<=n; i++) {
	prefixSum[i] = prefixSum[i-1] + v[i-1];
   }
}


bool isOK(vi &v, int &n, int &d, int &c, int k){
	int coin = 0;
	for(int i = 0; i<d; i++) {
		if(i%k < n) coin+=v[i%k];
		if(coin>=c)break;
	}
	return coin>=c;
}
 
 
void uttor() {
   int n, c, d; cin>>n>>c>>d;
   vi v(n); input(v);
   sort(all(v), greater<int>());
   if(c>d*v[0]) {
	cout<<"Impossible"<<'\n';
	return;
   }
   int ans = 0;
   int l = 1, r = d+1, k;
   while(l<=r) {
	k = l + (r - l)/2;
	if(isOK(v, n, d, c, k)) {
		ans = k - 1;
		l = k+1;
	}
	else r = k - 1;
   }
   if(k>d)cout<<"Infinity"<<'\n';
   else cout<<ans<<'\n';
 
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int tc = 1;
	cin >> tc;
	for (int t = 1; t <= tc; t++) {
		// cout << "Case #" << t << ": ";
		uttor();
	}
	return 0;
}


