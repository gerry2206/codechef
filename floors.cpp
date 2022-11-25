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
    int x, y;
    cin >> x >> y;

    int inflr = 0;
    int wnflr = 0;

    if(x % 10 == 0 ){
        inflr = x /10;
    }else{
        inflr = x/ 10 + 1;
    }

    if(y % 10 == 0){
        wnflr = y/10;
    }else{
        wnflr = y/10 + 1;
    }

    cout << abs(wnflr - inflr) << endl;
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
