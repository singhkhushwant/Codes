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
int subseq(string input, string output[])
{
  if(input.empty())
    return 1;
  int size=subseq(input.substr(1),output);
  for(int i=0;i<size;i++)
  {
    output[i+size]=input[0]+output[i];
  }
  return 2*size;
}

int32_t main()
{
    speed
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

      string input;
      cin>>input;
      string *output= new string[100];
      int size=subseq(input,output);
      for(int i=1;i<size;i++)
        cout<<output[i]<<"\n";

    delete []output;
    return 0;

}
*/

void subseq(string input, string output)
{
  if(input.length()==0){
    cout<<output<<endl;
    return;
  }
  subseq(input.substr(1),output);
  subseq(input.substr(1),output+input[0]);
}

int32_t main()
{
    speed
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

      string input;
      cin>>input;
      string output="";
      subseq(input,output);
    return 0;

}
