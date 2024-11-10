#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
     vector<long long int> a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    
    long long int ans=0;
    for(int i=0,j=0;i<m;){
        if(j<n && a[j]<b[i]){
            ans++;
            j++;  
        }
        else{
            cout<<ans<<" ";
            i++;
        }
    }
    
}