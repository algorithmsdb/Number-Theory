#include<bits/stdc++.h>
using namespace std;
#define MAX 1000001
int totient[MAX+10];

void euler_totient()
    {
    for(int i=2;i<=MAX;i++) totient[i]=i;
    for(int i=2;i<=MAX;i++)
        {
        if(totient[i]==i)
            {
            for(int j=2*i;j<=MAX;j+=i)
                {
                totient[j]-=(totient[j]/i);          // If n =p1^a1 * p2^a2 * .... * pk^ak , then Euler function can be found using formula:
                                                    //  φ (n) = n * (1 – 1/p1) * (1 – 1/p2) * ... * (1 – 1/pk)
                }
            }
        }
    for(int i=2;i<=MAX;i++)     // for prime numbers
        {
        if(totient[i]==i)
            {
            totient[i]--;
            }
        }


    }


int main()
{
euler_totient();
for(int i=2;i<=20;i++) cout<<i<<" -> "<<totient[i]<<"\n";
}
