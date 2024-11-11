#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    long long int a[n],b[m];
    unordered_map<long long int,long long int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    long long int ans=0;
    for(int j=0;j<m;j++){
        cin>>b[j];
        ans+=mp[b[j]];
    }
    cout<<ans;
}