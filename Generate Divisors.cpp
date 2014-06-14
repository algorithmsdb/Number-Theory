#include<bits/stdc++.h>
using namespace std;

void divisors(int n)
{
    int i=1;
    int sq=(int)(ceil(sqrt(n)));
    set<int> ms;
    while(i < sq)
        {
            if(n%i==0)
            {
            ms.insert(i);
            ms.insert(n/i);
            }
        i++;
        }
    if(i*i == n)
        ms.insert(i);

    for(set<int>::iterator it=ms.begin();it!=ms.end();it++)
        {
        cout<<*it<<" ";
        }

}


int main()
{
divisors(100);
}
