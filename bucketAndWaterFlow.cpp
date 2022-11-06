#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
    int w,x,y,z;
    cin >> w >> x >> y >> z;

    int ans = w + (y * z);

    if(ans < x) cout << "unfilled" << endl;
    else if(ans > x) cout << "overflow" << endl;
    else cout << "filled" << endl;
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
