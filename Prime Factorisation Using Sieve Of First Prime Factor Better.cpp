#include<bits/stdc++.h>
using namespace std;
#define MAX 10000000
int arr[MAX+10]={0};

void sieve()
    {
    for(int i=2;i<=MAX;i++)
        {
            if(arr[i]!=0) continue;

            for(int j=2*i;j<=MAX;j+=i)
                    {
                    if(arr[j]==0) arr[j]=i; 
                    }
        }
    }

int main()
    {
    sieve();
    int n;
    while(scanf("%d",&n)!=EOF)
        {
        printf("1");
        if(n==1) {printf("\n"); continue;}
        if(arr[n]!=0)
        while(1)
            {
            printf(" x %d",arr[n]);
            n/=arr[n];
            if(arr[n]==0) break;
            }

        printf(" x %d",n);
        printf("\n");
        }
    }

