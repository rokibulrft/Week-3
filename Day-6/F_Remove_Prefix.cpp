#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        int dup=0;
        for(auto [x,y]:mp){
            if(y>1){
                dup+=y-1;
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(dup==0) break;
            if(mp[v[i]]>1){
                dup--,mp[v[i]]--;
            }
            cnt++;
        }
        cout<<cnt<<endl;
    }
}