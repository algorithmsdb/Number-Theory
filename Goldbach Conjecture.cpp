// A Goldbach number is an even positive integer that can be expressed as the sum of two primes

#include<bits/stdc++.h>
using namespace std;

#define MAX 100000
int primes[MAX];

void gen_primes()
     {

       for(int i=0;i<MAX;i++) primes[i] = 1; 

       int sq=(int)sqrt(MAX);
       primes[0]=primes[1]=0;

       for(int i=2;i<=sq;i++)
         if (primes[i]==1)
           for(int j=i;j*i<MAX;j++)
                primes[i*j] = 0;
     }

int FindSol(int n)
     {
       int i,res=0;
       for(i=2;i<=n/2;i++)
         if (primes[i] && primes[n-i]) {cout<<i<<" "<<n-i<<"\n"; res++;}
       return res;
     }


int main()
{
gen_primes();
cout<<FindSol(20); // number of ways to express the given number as the sum of two primes
}
