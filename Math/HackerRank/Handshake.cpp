#include<bits/stdc++.h>
using namespace std;
int main(){
    int tcase;
    cin>>tcase;
    
    //using nC2
    while(tcase--){
        long long n;cin>>n;
        cout<<(n*(n-1)/2LL)<<'\n';
    }
    return 0;
}
