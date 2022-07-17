#include<bits/stdc++.h>
using namespace std;
int size = 0;
int help(int a[])
{
    size = sizeof(a);   
    if(size == 1)
    return a[0];
    int b[size-1];
    for(int i = 0;i <= size-2;i++)
    {
        b[i] = a[i+1] - a[i];
    }
    sort(b,b+size-1);
    return  help(b);
}
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
      int arr[n];
      for(int i = 0;i<n;i++)
      {
        cin >> arr[i];
      }
    cout << help(arr);
    cout << endl ;
    } 
    return 0;
}