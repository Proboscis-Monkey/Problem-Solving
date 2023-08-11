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
#define size(n) (int)n.size()
#define debug(x) cerr<<x<<" ";
#define ren(x) cout<<x<<'\n'
bool cmp(pair<int, int> &x, pair<int, int> &y)
{
    if (x.second != y.second) {
        return x.second < y.second;
    }
 
    return x.first < y.first;
}
 
void input(vector<int>&v, int n) {
    for(int i = 0; i<n; i++) cin>>v[i];
}

void print(vector<int>&v, int n) {
    for(int i = 0; i<n; i++) {
        cerr<<v[i]<<" ";
    }
    cerr<<'\n';
}

void fPreSum(vector<int>&prefixSum, vector<int>&v, int n) { // create n+1 length vector and initialize it with 0
    for(int i = 1; i<=n; i++) {
    prefixSum[i] = prefixSum[i-1] + v[i-1];
   }
}

/*
            __,__
   .--.  .-"     "-.  .--.
  / .. \/  .-. .-.  \/ .. \
 | |  '|  /   Y   \  |'  | |
 | \   \  \ 0 | 0 /  /   / |
  \ '- ,\.-"`` ``"-./, -' /
   `'-' /_   ^ ^   _\ '-'`
       |  \._   _./  |
       \   \ `~` /   /
        '._ '-=-' _.'
           '~---~'
*/
bitset<100001>isPrime;
void seive() {
    isPrime.set();
    isPrime[1] = 0;
    for(int i = 2; i*i<=100000; i++) {
        if(isPrime[i]) {
            for(int j = i*i; j<=100000; j+=i) {
                isPrime[j] = 0;
            }
        }
    }
}


void uttor() {
   int n; cin>>n;
   int cntOne = 0;
   int primeCount = 0;
   int x;
   for(int i = 0; i<n; i++) {
        cin>>x;
        if(x==1)cntOne++;
        if(isPrime[x])primeCount++;
   }
   if(cntOne<2){
    ren(0);
    return;
   }
   int ans = (cntOne*(cntOne-1))/2;
   ans*=primeCount;
   ren(ans);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    seive();
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        uttor();
    }
    return 0;
}
