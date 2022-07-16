#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x1,x2,x3;
    cin >> x1 >> x2 >> x3;
    if(x1<max(x2,x3))
    {
        cout << x1 - (min(x1,min(x2,x3))) + max(x1,max(x2,x3))-x1;
    }
    else
        cout << max(x2,x3)-min(x1,min(x2,x3)) + max(x1,max(x2,x3)) - max(x2,x3);

    return 0;
}