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
    double n;
    cin >> n;
    if(n < 1500){
        cout <<fixed << setprecision(2)<< n + (n *(0.1)) + (n * 0.9) << nline;
    }else{
        cout <<fixed << setprecision(2) << n + 500 + (n * (0.98)) << nline;
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
    
    /* return 0; */
}
