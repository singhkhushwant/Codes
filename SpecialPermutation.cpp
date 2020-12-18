#include<bits/stdc++.h>
using namespace std;

void perm(int n)
{
  for(int i=n,j=1;i>0;i--,j++)
  {
    if(i!=j)
      cout<<i<<' ';
    else
    {
      cout<<--i<<' ';
      cout<<++i<<' ';
      j++;
      i--;
    }
  }
}
int main()
{
  int test,num;
  cin>>test;
  while(test--)
  {
    cin>>num;
    perm(num);
    cout<<'\n';
  }
}
