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

int main()
{
gen_primes();
for(int i=0;i<=100;i++)
    {
    if(primes[i]==1) cout<<i<<" ";
    }
}
