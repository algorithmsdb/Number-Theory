#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;

ll gcd(ll m, ll n) {
   if ((m % n) == 0)
      return n;
   else
      return gcd(n, m % n);
}

int main()
{
cout<<gcd(4,10);
cout<<"\n";
cout<<__gcd(4,10);
}
