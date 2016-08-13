#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n,l=0,r=0,u=0,d=0;
    string s;
    
    cin>>n>>s;
    
    for(int i=0;i<n;i++)
    {
        int a=s[i]-'0';
        if((a==1)||(a==2)||(a==3))
            u=1;
        if(a==1 || a==4 || a==7 || a==0)
            l=1;
        if(a==3 || a==6 || a==9 || a==0)
            r=1;
        if(a==7 || a==9 || a==0)
            d=1;
    }
    
    if(u && l && r && d)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
    return 0;    
       }
