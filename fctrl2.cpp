#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)

int fact(int n){
    if(n == 0) return 1;
    return fact(n-1) * n;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll nu;
        cin >> nu;
       cout << fact(nu) << endl; 
    }
}
