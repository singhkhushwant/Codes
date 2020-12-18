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

void rmC(char s[])
{
  if(s[0]=='\0')
    return;
  if(s[0]==s[1])
  {
    int i=1;
    for(;s[i]!='\0';i++)
      s[i]=s[i+1];
    rmC(s);
  }
  else
    rmC(s+1);
}

int32_t main()
{
    speed
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int test;
    cin>>test;
    while(test--)
    {
      char str[100];
      cin>>str;
      rmC(str);
      cout<<str;
      cout<<'\n';
        //code here
    }

    return 0;

}
