#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define len(x) x.size()
#define max3(a,b,c) max(a,man(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int32_t main()
{
    speed
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    string s;
    cin>>s;
    ll count=1,max=1,len=s.length();
    for(ll i=1;i<len;i++)
    {
      if(s[i-1]==s[i])
        count++;
      else
        count=1;
      if(max<count)
        max=count;
    }
    cout<<max;
    return 0;

}
