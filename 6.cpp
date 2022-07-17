#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        int count = 0,remain = 0;
        while(n != 0)
        {
            remain = n%10;
            if(remain*pow(10,count) > 0)
                v.emplace_back(remain*pow(10,count));
            count++;
            n = n/10;
        }
        cout << v.size() << endl;
        for(int i = 0;i<v.size();i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}