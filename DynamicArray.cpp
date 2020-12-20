#include<bits/stdc++.h>
#include"DynamicArrayClass.cpp"

using namespace std;

int32_t main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif

  DynamicArray a;
  a.add(10);
  a.add(120);
  a.add(30);
  a.add(40);
  a.add(50);
  a.add(160);
  a.add(107);
  a.print();
  a.get(5);
  a.add(100,5);
  a.print();
  DynamicArray b;
  b.add(10);
  b.add(1500);
  b.print();
  DynamicArray c(a);
  c.print();
  DynamicArray d;
  d=b;
  d.print();
  DynamicArray e;
  e.add(10);
  e.print();
  e=a;
  e.print();
}
