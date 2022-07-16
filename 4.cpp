#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int tDrink = 0,tSlice = 0;
    tDrink = k*l;
    tSlice = c*d;
    int ans = min(min(tDrink/nl,tSlice),p/np);
    cout << ans/n ;
    return 0;
}