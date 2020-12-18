#include<bits/stdc++.h>
#include "ComplexNumberClass.cpp"
using namespace std;

#define speed ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int32_t main()
{
  speed
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif

  comp c1(10,15);
  comp c2(11,-12);
  c1.display();
  c2.display();
  c1.add(c2);
  c1.display();
  c1.multiply(c2);
  c1.display();
  return 0;
}
