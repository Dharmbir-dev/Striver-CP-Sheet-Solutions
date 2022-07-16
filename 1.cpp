#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,ans = 0;
    char c[3];
    cin >> t;
    while(t--)
    {
        cin >> c[0] >> c[1] >> c[2] ;
        if(c[1] == '+')
            ans += 1;
        else
            ans -= 1;
    }
    cout << ans ;
    return 0;
}