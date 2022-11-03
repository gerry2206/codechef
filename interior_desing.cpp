#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)

void solve() {
    int x1, y1 , x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if((x1 + y1) > (x2+y2)) cout << x2 + y2 << endl;
    else if((x1 + y1) == (x2 + y2)) cout << x1+y1 << endl;
    else cout << x1 + y1 << endl;
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
