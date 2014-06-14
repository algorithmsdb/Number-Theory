#include<bits/stdc++.h>
using namespace std;
typedef long long ull;
ull sumofdivisors(int n)
     {
       /***********dont write this statement after this comment, it causes tle****************///int sq=(ull)(long long)sqrt(n);
       ull ans,temp;
       ans=1;
       int exp;
       for(int i=2;i*i<=n;i++)
       {
        exp=0;
         while(n % i == 0)
         {
           n /= i;
           exp++;
         }
         if(exp>0)
         {

         temp=((pow(i,exp+1)-1)/(i-1));
         ans*=temp;
         }

       }

       if (n > 1)
       {
       temp=((pow(n,1+1)-1)/(n-1));
       ans*=temp;
       }

        return ans;

     }


int main()
{
 int t,x;
 cin>>t;
 while(t--)
    {
    cin>>x;
    cout<<sumofdivisors(x)<<"\n"; // sum of all divisors, including 1 and number itself
    }
}



