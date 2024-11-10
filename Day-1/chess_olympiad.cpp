#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int count=x+y+z;
    float our_points=x+y*0.5;
    float opposition=z+y*0.5;
    if((our_points+4-count)>opposition) cout<<"YES";
    else cout<<"NO";
}