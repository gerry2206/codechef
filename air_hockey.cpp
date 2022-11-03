#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)

void solve() {
    int a, b;
    cin >> a >> b;
    if(a > b){
        cout << 7 - a << endl;
    }
    else if(b > a) cout << 7- b << endl;
    else if (a == b) cout << 7 - a << endl;
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
