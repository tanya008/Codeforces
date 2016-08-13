#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int greedy(vector<int > v,int n);
int main() {
    
    int n,a=0;
    
    vector<int > v;
    
    cin>>n;
    
    int ans=n;
    int i=0,j=n/2;
    
    for(int x=0;x<n;x++)
    {
        cin>>a;
        v.push_back(a);
    }
    
    sort(v.begin(),v.end());
    
    while(i<n/2 && j<n)
    {
        if(v[j]>=(2*v[i]))
        {
            ans--;
            i++;
            j++;
        }
        
        else
        {
             j++;
        }
        
    }
    
     cout<<ans;
     return 0;
}
    
