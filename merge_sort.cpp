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

void merge(int a[], int start, int mid, int end)
{
  int *l=new int [mid-start+1];
  int *r=new int [end-mid];
  for(int i=0;i<mid-start+1;i++)
    l[i]=a[start+i];
  for(int i=0;i<end-mid;i++)
    r[i]=a[mid+1+i];
  int i=0,j=0,k=start;
  while(i<mid-start+1 && j<end-mid)
  {
    if(l[i]>=r[j])
    {
      a[k]=r[j];
      j++;
    }
    else{
      a[k]=l[i];
      i++;
    }
    k++;
  }
  if(i<mid-start+1)
  {
    a[k]=l[i];
    i++;
    k++;
  }
  if(j<end-mid)
  {
    a[k]=r[j];
    j++;
    k++;
  }
  delete []l;
  delete []r;
}

void sort(int a[],int start,int end)
{
  if(start>=end)
    return;
  int mid=(start+end-1)/2;
  sort(a,start,mid);
  sort(a,mid+1,end);
  merge(a,start,mid,end);
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
      int num;
      cin>>num;
      int *a= new int[num];
      for(int i=0;i<num;i++)
        cin>>a[i];
      for(int i=0;i<num;i++)
        cout<<a[i]<<' ';
      cout<<"\n";
      sort(a,0,num);
      for(int i=0;i<num;i++)
        cout<<a[i]<<' ';
      delete []a;
      cout<<endl;
    }

    return 0;

}
