#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count_pair=0;
        for(int i=0,j=n-1;i<=j;i++,j--){
            if((s[i]=='1' && s[j]=='0') || (s[i]=='0' && s[j]=='1')){
                count_pair++;
            }else{
                break;
            }
        }
        cout<<n-count_pair*2<<endl;
    }
}