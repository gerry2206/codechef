#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
    int x, y, z;
    cin >> x >> y >> z;

    if(z % x == 0 && z % y != 0) cout << "CHICKEN" << endl;
    else if( z % x != 0 && z % y == 0 ) cout << "DUCK" << endl;
    else if( z % x == 0 && z % y == 0 ) cout << "ANY" << endl;
    else cout << "NONE" << endl;
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
