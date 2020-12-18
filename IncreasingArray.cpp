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

void put_num(ll a) {
	ll id = 0;
	char num_str[18];
	num_str[0] = a % 10 + '0';
	while (a /= 10)
		num_str[++id] = (char)(a % 10) + '0';
	for (int i = id; i >= 0; i--)
		putchar_unlocked(num_str[i]);
}

ll get_num() {
	ll chr = getchar_unlocked();
	ll a = chr - '0';

	while (true) {
		chr = getchar_unlocked();
		if (chr < '0') return a;
		a = a * 10 + chr - '0';
	}
}

int32_t main()
{
    speed
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    ll step=0,num;
    num=get_num();
    ll *a=new ll[num+100];
    for(ll i=0;i<num;i++)
    {
        a[i]=get_num();
    }
    for(ll i=1;i<num;i++)
    {
        if(a[i-1]>a[i]){
          step+=a[i-1]-a[i];
          a[i]=a[i-1];
        }
    }
    put_num(step);

    delete []a;
    return 0;
}
