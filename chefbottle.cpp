#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, x, k;
    cin >> n >> x >> k;
    
    int req = n * x;

    if( k >= req) cout << n << endl;
    else{
        if( x <= k){
            int absl = abs ( k - (n * x));
            if(absl % x == 0) cout << n - ( absl / x) << endl;
            else cout << (n - ( absl / x) ) + 1 << endl;
        }
        else cout << "0" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++) {
        solve();
    }
    
    return 0;
}
