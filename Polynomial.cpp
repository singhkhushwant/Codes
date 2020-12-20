#include<bits/stdc++.h>
#include"PolynomialClass.cpp"

using namespace std;

int32_t main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif

  PolynomialClass p1;
  p1.set(4,2);
  p1.set(3,1);
  p1.set(2,0);
  p1.print();
}
