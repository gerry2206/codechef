#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
    //Janmansh and Games
    int x, y;
    cin >> x >> y;

    if( x % 2 == 0 && y % 2 == 0 ) cout << "Janmansh" << endl;
    else if( x % 2 != 0 && y % 2 != 0) cout << "Janmansh" << endl;
    else cout << "Jay" << endl;
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

