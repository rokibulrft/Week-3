#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m),c(m+n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    int i=0,j=0,k=0;
    while(i<n || j<m){
        if(j==m || i<n && a[i]<b[j]){
            c[k]=a[i];
            i++,k++;
        }else{
            c[k]=b[j];
            j++,k++;
        }
    }
    for(auto val:c){
        cout<<val<<" ";
    }
}