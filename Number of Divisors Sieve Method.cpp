#include<bits/stdc++.h>
using namespace std;
#define MAX 10000000   // 10^7
int numdiv[MAX+10]={0};

int main()
{

for(int i=1;i<=MAX;i++)
    {
    for(int j=i;j<=MAX;j+=i)
        {
        numdiv[j]++;
        }
    }

for(int i=1;i<=20;i++) cout<<i<<" -> "<<numdiv[i]<<"\n"; 

}
