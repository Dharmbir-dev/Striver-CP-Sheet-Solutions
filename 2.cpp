#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
string s;
cin >> s;
 
if(s.size() == 1){
   if(s[0] == '9'){
      cout << s[0] << endl;
      return 0;
   }
}
 
string ans="";
if(s[0] == '9'){
   ans+=s[0];
for(int i=1;i<s.size();i++){
   if(s[i] <= 52){
      ans+=s[i];
   }else{
      int x = (s[i]-'0');
      x = 9-x;
      ans+=to_string(x);
   }
}   
}else{
for(int i=0;i<s.size();i++){
   if(s[i] <= 52){
      ans+=s[i];
   }else{
      int x = (s[i]-'0');
      x = 9-x;
      ans+=to_string(x);
   }
}
}
 
cout << ans << endl;
    return 0;
}