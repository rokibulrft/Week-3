#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int r=0,count_b=0;
        while(r<n){
            if(s[r]=='B'){
                count_b++;
                r=r+k;
            }else{
                r++;
            }
        }
        cout<<count_b<<endl;
    }
}