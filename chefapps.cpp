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
    int s, x , y, z;
    cin >> s >> x >> y >>z;

    int mn = min(x, y);
    int uti = x + y;
    int fres = s - uti;

    if(z <= fres) {
        cout << "0" << endl;
    }else{
        if(s - mn >= z) cout << "1" << endl;
        else cout << "2" << endl;
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
