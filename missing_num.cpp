#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define len(x) x.size()
#define max3(a,b,c) man(a,man(b,c))
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

    ll num,sum=0,temp;
    cin>>num;
    ll t=num-1;
    while(t--)
    {
        cin>>temp;
        sum+=temp;
    }
    ll osum=((num*num)+num)/2;
    cout<<osum-sum;
    return 0;
}
