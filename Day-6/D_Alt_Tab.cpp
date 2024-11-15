#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> v;
    map<string,int> mp;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s); 
    }
    queue<string> q;
    for(int i=v.size()-1;i>=0;i--){
        mp[v[i]]++;
        if(mp[v[i]]==1) q.push(v[i]);
    }
    while(!q.empty()){
        string s=q.front();
        
        cout<<s.substr(s.size()-2);
        q.pop();
    }
}