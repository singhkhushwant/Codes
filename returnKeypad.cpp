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

/*
int le(int n)
{
  int t=0;
  while(n)
  {
    t++;
    n/=10;
  }
  return t;
}

int findkey(int n, string key[], string output[])
{
  if((n%10)==0)
    return 1;
  int size=findkey(n/10,key,output);
  int k=0;
  for(int i=0;i<=key[n%10].length();i++)
  {
    for(int j=0;j<size;j++,k++)
    {
      output[size+k]=output[j]+key[n%10].substr(i,1);
    }
  }
  return k;
}
int32_t main()
{
  speed
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;
    cin>>n;
    string key[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string *output= new string[1000];
    int total=findkey(n,key,output);
    for(int i=0;i<total;i++)
    {
      if(le(n)==output[i].length())
      cout<<output[i]<<"\n";
    }
    delete []output;
    return 0;
}
*/

void retkey(int n,string key[],string output)
{
  if(key[n%10].length()==0){
    cout<<output<<endl;
    return;
  }
  for(int i=0;i<key[n%10].length();i++)
    retkey(n/10,key,key[n%10].substr(i,1)+output);
}

int32_t main()
{
    speed
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
      int n;
      string key[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
      cin>>n;
      string output="";
      retkey(n,key,output);
    return 0;
}
