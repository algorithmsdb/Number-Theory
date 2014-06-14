#include<bits/stdc++.h>
using namespace std;  
typedef unsigned long long ull;

/* this function calculates (a*b)%c taking into account that a*b might overflow */
ull mulmod(ull a,ull b,ull c){
    ull x = 0,y=a%c;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%c;
        }
        y = (y*2)%c;
        b /= 2;
    }
    return x%c;
}


/* This function calculates (a^b)%c */
ull modulo(ull a,ull b,ull c){
    ull x=1,y=a; // long long is taken to avoid overflow of intermediate results
    while(b > 0){
        if(b%2 == 1){
            x=mulmod(x,y,c);
        }
        y = mulmod(y,y,c); // squaring the base
        b /= 2;
    }
    return x%c;
}


/* Fermat's test for checking primality, the more iterations the more is accuracy */
bool Fermat(ull p,int iterations){
    if(p == 1){ // 1 isn't prime
        return false;
    }
    for(int i=0;i<iterations;i++){
        // choose a random integer between 1 and p-1 ( inclusive )
        ull a = rand()%(p-1)+1;
        // modulo is the function we developed above for modular exponentiation.
        if(modulo(a,p-1,p) != 1){
            return false; /* p is definitely composite */
        }
    }
    return true; /* p is probably prime */
}


int main()
{
    int t;
    ull n;
    cin>>t;
    while(t--)
        {
        cin>>n;
        if(Fermat(n,2)==true) cout<<"YES\n";
        else cout<<"NO\n";
        }
}


