#include<bits/stdc++.h>
#include "FractionClass.cpp"
using namespace std;

#define speed ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int32_t main()
{
  speed
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif

  Fraction f(10,0);
  Fraction f1(15,15);
  f1.display();
  Fraction f2(100,10);
  f2.display();
  f1.add(f2);
  f1.display();
  f2.display();
  f1.multiply(f2);
  f1.display();

  return 0;
}
