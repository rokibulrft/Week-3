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
        int count=0;
        int i=0,j=0;
        set<int> st;
        while(j<n){
            if(s[j]=='W'){
                count++;
            }
            if(j-i+1==k){
                st.insert(count);
                if(s[i]=='W'){
                    count--;
                }
                i++,j++;
            }else{
                j++;
            }
        }
        cout<<*st.begin()<<endl;
    }
}