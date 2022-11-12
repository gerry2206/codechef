#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
    int x;
    cin >> x;

    if( x< 100 ) cout << x << endl;
    else if(x > 100 && x <= 1000 ) cout << x - 25 << endl;
    else if(x > 1000 && x <= 500) cout << x - 100 << endl;
    else if (x > 5000) cout << x - 500 << endl;
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
