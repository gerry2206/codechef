#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int ect = 0;
    int oct = 0;

    while(t--){
        int n;
        cin >> n;

        if(n%2 == 0){
            ect++;
        }
        else {
            oct++;
            

    }
    }
    if(ect > oct ) cout << "READY FOR BATTLE" << endl;
    else cout << "NOT READY" << endl;
}
