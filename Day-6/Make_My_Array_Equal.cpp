#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        set<int> st;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]!=0){
                st.insert(v[i]);
            }
        }
        if(st.size()<=1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}