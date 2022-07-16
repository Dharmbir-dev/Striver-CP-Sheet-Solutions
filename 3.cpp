#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int val = 0, Row = 0, Col = 0;
    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> val;
            if (val == 1)
            {
                ans = abs(2-i)+ abs(2-j);
            }
        }
    }
    cout << ans << endl;
    return 0;
}