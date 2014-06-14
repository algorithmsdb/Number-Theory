#include<bits/stdc++.h>
using namespace std;
/*************************************************************************************************************************************************/
#define MAX 10000000
bool primes[MAX+10];

int foundprimes[MAX+10];
int ind=0;
unsigned fact[100][2];

unsigned flag[MAX/64];
#define ifc(x) (flag[x>>6]&(1<<((x>>1)&31)))
#define isc(x) (flag[x>>6]|=(1<<((x>>1)&31)))


void gen_primes() 
     {

       int sq=3200,k;
       primes[0]=primes[1]=1;
        int twice;
       for(int i=3;i<=sq;i+=2)
         if (!ifc(i))
            {
                twice=2*i;
                for(int j=i*i;j<MAX;j+=twice)
                    isc(j);
            }
        foundprimes[ind++]=2;
        for(int i=3;i<=MAX;i+=2)
        {
            if(!ifc(i)) foundprimes[ind++]=i;
        }

     }
/*************************************************************************************************************************************************/
void factor(int n)
     {
     int flag=1;

       for(int i=0;foundprimes[i]*foundprimes[i]<=n;i++)
       {
         while(n % foundprimes[i] == 0)
         {


           if(flag==1) {printf("%d",foundprimes[i]);flag=0;}
            else printf(" * %d",foundprimes[i]);
           n /= foundprimes[i];
         }
       }
       if (n > 1)
       {
       if(flag==1) printf("%d",n);
        else printf(" * %d",n);
       }
       printf("\n");
     }
/*************************************************************************************************************************************************/


int main()
    {
    gen_primes();
    int flag;
    int n,nc,c;
    while(1)
        {
        flag=1;
        scanf("%d",&n);
        if(n==0) break;
        nc=n;
        printf("%d = ",n);
        factor(n);

        }
    }


