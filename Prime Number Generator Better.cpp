#include<bits/stdc++.h>
using namespace std;

//5761455
#define MAX 100000000  // 10^8

long foundprimes[5761455];
long ind=0;


unsigned flag[MAX/64];
#define ifc(x) (flag[x>>6]&(1<<((x>>1)&31)))
#define isc(x) (flag[x>>6]|=(1<<((x>>1)&31)))


void gen_primes()
     {

       long sq=10000,k;;
        long twice;
       for(long i=3;i<sq;i+=2)
         if (!ifc(i))
            {
                twice=2*i;
                for(long j=i*i;j<MAX;j+=twice)
                    isc(j);
            }
        foundprimes[ind++]=2;
        for(long i=3;i<MAX;i+=2)
        {
            if(!ifc(i)) foundprimes[ind++]=i;
        }

     }

int main()
{
gen_primes();

for(long i=0;foundprimes[i]<=100;i++)
    {
    cout<<foundprimes[i]<<" ";
    }


}



