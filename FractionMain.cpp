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

/*
  Fraction f1(15,15);
  f1.display();
  Fraction f2(100,10);
  f2.display();
  //f1.add(f2);
  //f1.display();
  //f2.display();
  //f1.multiply(f2);
  //f1.display();
  Fraction const f3(10,20);
  f3.display();
  f3.getnumerator();
  f3.getdenominator();
  f3.getx();
  */
  Fraction f1(5,1);
  Fraction f2(6,1);
  Fraction f4=f1+f2;
  ++f4;
  Fraction f5=++(++f4);
  f4.display();
  f5.display();
  Fraction f6=f4++;
  f4.display();
  f6.display();
  f6+=f1;
  f1.display();
  f6.display();
  return 0;
}
