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

inline void put_num(long a) {
	long id = 0;
	char num_str[7];
	num_str[0] = a % 10 + '0';
	while (a /= 10)
		num_str[++id] = (char)(a % 10) + '0';
	for (int i = id; i >= 0; i--)
		putchar_unlocked(num_str[i]);
}

inline long int get_num() {
	int chr = getchar_unlocked();
	long a = chr - '0';

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


    long int num,odd=1,even=2;
    num=get_num();
    if(num==2 or num==3)
      cout<<"NO SOLUTION";
    else
    {
      while(even<=num)
      {
        put_num(even);
        putchar_unlocked(' ');
        even+=2;
      }
      while(odd<=num)
      {
        put_num(odd);
        putchar_unlocked(' ');
        odd+=2;
      }
    }
    return 0;

}
