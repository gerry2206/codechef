#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
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
   int a, b, c;
   cin >> a >> b >> c;

   int minnab = min(a, b), minbc = min(b, c);
   int minall = min(minnab, minbc);

   if(minall == a) cout << "Draw" << nline;
   else if(minall == b) cout << "Bob" << nline;
   else cout << "Alice" << nline;
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
